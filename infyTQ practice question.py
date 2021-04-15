
## queue Class implementation

class Queue:
    def __init__(self,max_size):
        self.__max_size=max_size
        self.__elements=[None]*self.__max_size
        self.__rare=-1
        self.__front=0
    
    def get_max_size(self):
        return self.__max_size
    
    def is_full(self):
        if(self.__rare == self.__max_size-1):
            return True
        return False
    
    def is_empty(self):
        if(self.__front > self.__rare):
            return True
        return False
    
    def enque(self,data):
        if(self.is_full()):
            print("Queue is Full!!")
        else:
            self.__rare+=1
            self.__elements[self.__rare]=data
    
    def deque(self):
        if(self.is_empty()):
            print("Queue is Empty")
        else:
            data=self.__elements[self.__front]
            self.__front+=1
            return data
            
    def display(self):
        for i in range(self.__front,self.__rare+1):
            print(str(self.__elements[i]))
        
    def __str__(self):
        msg=[]
        idx=self.__front
        while(idx<=self.__rare):
            msg.append(str(self.__elements[idx]))
            idx+=1
        msg=" ".join(msg)
        msg="Queue Data from front to rare:"+msg
        return msg

## people class implementation

class people:
    def __init__(self,name,age,gender):
        self.__name=name
        self.__age=age
        self.__gender=gender
    
    def get_name(self):
        return self.__name
    
    def get_age(self):
        return self.__age
    
    def get_gender(self):
        return self.__gender
        
    def __str__(self):
        return "{} of {} is a {}".format(self.__name,self.__age,self.__gender)
    
    @staticmethod
    def check_gender(people_queue,gender):
        size=people_queue.get_max_size()
        male_q = Queue(size)
        while size>0:
            per=people_queue.deque()
            if per.get_gender()==gender:
                male_q.enque(per)
                
            size-=1
            
        return male_q



people_queue = Queue(5)
p1=people("Ran",12,"Male")
p2=people("Wan",14,"Female")
p3=people("Sam",26,"Female")
p4=people("Chay",30,"Male")
p5=people("Colon",32,"NA")

people_queue.enque(p1)
people_queue.enque(p2)
people_queue.enque(p3)
people_queue.enque(p4)
people_queue.enque(p5)

result = people.check_gender(people_queue,"Male")

result.display()




            
            

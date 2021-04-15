class Queue:
    def __init__(self,max_size):
        self.__max_size=max_size
        self.elements=[None]*self.__max_size
        self.__rare=-1
        self.__front=0
    
    def get_max_size(self):
        return self.__max_size
    
    def is_full(self):
        if(self.__rare == self.__max_size-1):
            return True
        return False
    
    def is_empty(self):
        if(self.__front >= self.__rare):
            return True
        return False
    
    def enque(self,data):
        if(self.is_full()):
            print("Queue is Full!!")
        else:
            self.__rare+=1
            self.elements[self.__rare]=data
    
    def deque(self):
        if(self.is_empty()):
            print("Queue is Empty")
        else:
            data=self.elements[self.__front]
            self.__front+=1
            return data
            
    def display(self):
        for i in range(self.__front,self.__rare+1):
            print(self.elements[i])


queue=Queue(5)
queue.enque(12)
queue.enque(13)
queue.enque(14)
queue.display()
queue.deque()
queue.display()








            
            

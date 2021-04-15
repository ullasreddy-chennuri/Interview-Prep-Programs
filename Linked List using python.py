
class Node:
    def __init__(self,data=None,nex=None):
        self.data=data
        self.nex=nex
        
class LinkedList:
    def __init__(self):
        self.head=None
    
    
    # for inserting at beginning
    def insert_at_begin(self,data):
        node=Node(data,self.head)
        self.head=node
    
    # for displaying the list
    def display(self):
        if self.head is None:
            print("Linked list empty")
            return
        itr=self.head
        llst=''
        while itr:
            llst+=str(itr.data)+" "
            itr=itr.nex
        
        print(llst)
        
    # for inserting at the end of the list
    def insert_at_end(self,data):
        if self.head is None:
            self.head=Node(data,None)
            return
        itr=self.head
        while itr.nex:
            itr=itr.nex
        itr.nex=Node(data,None)
        
    # for inserting a list[] as linkedlist
    def insert_values(self,data_list):
        self.head=None
        for data in data_list:
            self.insert_at_end(data)
            
    
    # for getting length of linked list
    def get_length(self):
        if self.head is None:
            return 0
        count=0
        itr=self.head
        while itr:
            count+=1
            itr=itr.nex
        return count
        
    # deleting at beginning of linked list
    def del_beginning(self):
        if self.head is None:
            print("linked list is empty")
        self.head = self.head.nex
    
    # deleting elements from linked list using index
    def del_at(self,idx):
        if idx<0 or idx >= self.get_length():
            print("Invalid deletion occured")
            return
        if idx==0:
            self.head=self.head.nex
            return
        count=0
        itr=self.head
        while itr:
            if count == idx-1:
                itr.nex=itr.nex.nex
                break
            itr=itr.nex
            count+=1
            
    # inserting element at an index position
    def insert_at(self,idx,data):
        if idx<0 or idx >= self.get_length():
            print("Invalid insertion occured")
            return
        if idx==0:
            self.insert_at_begin(data)
            return
        
        count=0
        itr=self.head
        while itr:
            if count==idx-1:
                node=Node(data,itr.nex)
                itr.nex=node
                break
            count+=1
            itr=itr.nex
    
    
ll=LinkedList()
ll.insert_at_end(56)
ll.insert_at_end(32)
ll.insert_at_end(44)
ll.del_at(2)
ll.insert_at(1,23)
# ll.del_beginning()
# ll.del_beginning()
# ll.del_beginning()
ll.display()
        

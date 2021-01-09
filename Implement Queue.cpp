
// Question from Smart Interviews contest

// Question link : https://www.hackerrank.com/contests/smart-interviews/challenges/si-implement-queue




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Queue{
    int *arr;
    int f,r,cs,ms;
    public:
        Queue(){
            arr = new int[10000];
            cs=0;
            ms=10000;
            f=0;
            r=ms-1;
        }
    
        bool empty(){
            return cs==0;
        }
    
        void push(int data){
            r=(r+1)%ms;
            arr[r]=data;
            cs++;
        }
        
        void pop(){
            if(empty()){
                cout<<"Empty"<<endl;
            }else{
                cout<<arr[f]<<endl;
                f=(f+1)%ms;
                cs--;
            }
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    Queue q = Queue();
    while(t--){
        string s;
        cin>>s;
        if(s=="Enqueue"){
            int n;
            cin>>n;
            q.push(n);
        }else{
            q.pop();
        }
    }
    return 0;
}

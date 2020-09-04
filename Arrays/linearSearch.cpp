#include<iostream>
using namespace std;

int main(){

    int n,key;
    cin>>n;
    int a[1000];
    cout<<"Enter array elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"enter search value"<<endl;
    cin>>key;

    //linear search

    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<"Element at index"<<i<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"Element not found";
    }
}

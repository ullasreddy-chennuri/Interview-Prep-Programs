#include<bits/stdc++.h>
using namespace std;

void stairSearch(int a[][1000],int n,int k){

    // to apply binary search through columns and row
    // Choose right top corner or left bottom corner and start searching.

    int i=0;
    int j=n-1;
    while(a[i][j]!=k){
        if(a[i][j]>k){
            j--;
        }
        else{
            i++;
        }
    }

    cout<<"("<<i<<","<<j<<")"<<endl;

}

int main(){
     int a[1000][1000],n;
    cin>>n;
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    stairSearch(a,n,key);
    return 0;
}

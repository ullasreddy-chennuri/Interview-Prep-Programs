#include<bits/stdc++.h>
using namespace std;

int max_sum(int a[][1000],int m,int n){


    //Build a suffix sum matrix and check for the maximum element

    // column wise addition

    for(int i=m-1;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            a[i][j]+=a[i][j+1];
        }
    }

    // row wise addition

    for(int i=n-1;i>=0;i--){
        for(int j=m-2;j>=0;j--){
            a[i][j]+=a[i+1][j];
        }
    }

    int res = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res=max(res,a[i][j]);
        }
    }

    return res;
}

int main(){
    int m,n;
    cin>>m>>n;
    int a[1000][1000];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<max_sum(a,m,n)<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int submatrix_sum(int a[][1000],int m,int n){
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum += a[i][j]*((i+1)*(j+1)*(n-i)*(m-j));
        }
    }

    return sum;
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

    cout<<submatrix_sum(a,m,n)<<endl;

}

#include<bits/stdc++.h>
using namespace std;

int submatrix_sum(int a[][1000],int m,int n){
    //count no of sub matrices in which the cell occured and multiply it with the cell value 
    // and add it to sum 
    // Brute Force T.C : O(n^6)
    // T.C : O(n^2).
    
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

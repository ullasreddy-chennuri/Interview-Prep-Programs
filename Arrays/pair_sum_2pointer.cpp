
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}

    int i=0;
    int j=n-1;
    while(i<j){
        int curSum=a[i]+a[j];
        if(curSum>k){
            j--;
        }
        else if(curSum<k){
            i++;
        }
        else if(curSum == k){
            cout<<a[i]<<","<<a[j]<<endl;
            i++;
            j--;
        }
    }

}

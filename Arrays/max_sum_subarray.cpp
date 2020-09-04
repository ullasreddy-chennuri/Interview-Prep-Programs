#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    /*int n;
    cin>>n;
    int a[1000];
    int maxSum=0;
    int curSum=0;
    for(int i=0;i<n;i++){cin>>a[i];}

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            curSum=0;
            for(int k=i;k<=j;k++){
                curSum+=a[k];
            }
            if(curSum>maxSum){
                maxSum=curSum;
            }
        }
    }*/



   /* int n;
    cin>>n;
    int a[1000];
    int cumSum[1000]={0};
    int maxSum=0;
    int curSum=0;

    cin>>a[0];
    cumSum[0]=a[0];

    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        cumSum[i]=cumSum[i-1]+a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            curSum=0;
            curSum=cumSum[j]-cumSum[i-1];
            if(curSum>maxSum){
                maxSum=curSum;
            }
        }
    }*/


    // Kadane's Algorithm for sub array sum

    int n;
    cin>>n;
    int a[1000];
    int curSum=0;
    int maxSum=0;
    for(int i=0;i<n;i++){cin>>a[i];}

    for(int i=0;i<n;i++){

        curSum+=a[i];

        if(curSum<0){
            curSum=0;
        }

        maxSum=max(curSum,maxSum);
    }
    cout<<maxSum;
}

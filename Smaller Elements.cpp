

// Smart Interviews

// Question link : https://www.hackerrank.com/contests/smart-interviews/challenges/si-smaller-elements

/* 

You are given an array of integers. For each element in the array, find the number of smaller elements on the right side and print the total count.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, 
the first line contains N - the size of the array. The second line contains the elements of the array.

Constraints

1 <= T <= 100
1 <= N <= 100000
-10000 <= A[i] <= 10000

Output Format

For each test case, print the sum of count of smaller elements on right side of each element in the array, separated by new line.

Sample Input 0

2
5
4 10 54 11 8 
6
15 35 25 10 15 12 


Sample Output 0

4
10


Explanation 0

Test Case 1

Smaller Elements on right side of 4 : 0
Smaller Elements on right side of 10 : 1
Smaller Elements on right side of 54 : 2
Smaller Elements on right side of 11 : 1
Smaller Elements on right side of 8 : 0
Total Count = 0 + 1 + 2 + 1 + 0 = 4

*/

//Solution goes here

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Solution approach is similar to inversion count 
// using mergesort count the numbers


long long int merge(int a[],int lo,int hi){
    int m = (lo+hi)/2;
    int j=m+1;
    int i=lo;
    int temp[hi-lo+1];
    int k=0;
    long long int c=0;
    while(i<=m && j<=hi){
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else{
            temp[k++]=a[j++];
            c=c+m-i+1;
        }
    }
    while(i<=m){
        temp[k++]=a[i++];
    }
    while(j<=hi){
        temp[k++]=a[j++];
    }
    for(int i=lo;i<=hi;i++)
        a[i]=temp[i-lo];
    
    return c;
}


long long int merge_sort(int a[],int low,int high){
    
    long long int c=0;
    
    if(low==high){
        return 0;
    }
    int mid = (low+high)/2;
    c=c+merge_sort(a,low,mid);
    c=c+merge_sort(a,mid+1,high);
    c=c+merge(a,low,high);
    return c;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int ans = merge_sort(a,0,n-1);
        cout<<ans<<endl;
    }
    return 0;
}








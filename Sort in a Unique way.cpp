
/*
Rahul has found a new and unique way of sorting the arrays.

If the array is not sorted, he would remove the first or the second half of the array and he keeps on doing this process unless the array is completely sorted.

Your task is to find out the largest sorted array that can be obtained from the given unsorted array.

Input Format
The first line contains an integer 
T
, number of test cases. Then follows 
T
 test cases. Each test case consists of two lines.
The first line contains 
N
, size of the array, 
N
 is guaranteed to be a power of 2.
The second line contains 
N
 space-separated positive integers denoting elements of the array.

Output Format
The output contains 
T
 lines, each printing size of the sorted array.

Constraints
1<=T<=10

1<=N<=10^4
1<=A[i]<=10^5

Time Limit
1 second

Example
Input
3
4
1 2 2 4
8
11 12 1 2 13 14 3 4
4
7 6 5 4

Output
4
2
1

*/

#include <bits/stdc++.h>
  using namespace std;
  
  bool is_sorted(int arr[],int i,int n){
    for(int j=i;j<n;j++){
      if(arr[j]>arr[j+1]){
        return false;
      }
    }
    
    return true;
  }
  
  
  int sort_count(int arr[],int l,int h){
    if(l>=h){
      return 1;
    }
    int mi = (l+h)/2;
    int c1,c2;
    if(is_sorted(arr,l,h)){
      return (h-l+1);
    }else{
      c1=sort_count(arr,l,mi);
      c2=sort_count(arr,mi+1,h);
    }
    int res = max(c1,c2);
    return res;
  }
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      cout<<sort_count(arr,0,n-1)<<endl;
    }
    
    return 0;
  }

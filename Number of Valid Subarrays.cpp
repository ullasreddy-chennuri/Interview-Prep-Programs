
/*Question link : https://www.hackerrank.com/contests/smart-interviews/challenges/si-number-of-valid-subarrays

Question : 
 You are given a array containing only 0s and 1s . You have to tell the number of subarrays which has equal number of 0s and 1s.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines - the first line contains N - the size of the array. 
The second line contains the elements of the array.

Constraints

40 points
1 <= T <= 100
1 <= N <= 100

60 points
1 <= T <= 100
1 <= N <= 1000

100 points
1 <= T <= 100
1 <= N <= 50000

Output Format

For each test case, output the number of subarrays having equal numer of 0s and 1s, separated by new line.*/

/* Sample Input 0

3
4
1 0 1 0 
10
1 0 1 0 0 1 0 0 1 1 
4
1 1 1 1 
Sample Output 0

4
14
0

*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        cin>>a[0];
        if(a[0]==0){
            a[0]=-1;
        }
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                a[i]=-1;    // changing zeroes to -1
            }
            a[i]=a[i-1]+a[i];   // Computing prefix sum
        }
        
        // int count = 0;
        // for(int i=0;i<n;i++){
        //     if(a[i]==0){
        //         count++;    // for no of zeroes
        //     }
        // }
        
        int b[100001]={0};
        
        for(int i=0;i<n;i++){
            b[a[i]+n]++;
        }
        
        int count = 0;
        
        for(int i=0;i<100001;i++){
            if(b[i]>0){
                if(i-n!=0){
                    int temp = b[i];
                    int sum = (temp*(temp+1)/2) - temp;
                    count += sum;
                }else{
                    int temp = b[i]+1;
                    int sum = (temp*(temp+1)/2) - temp;
                    count += sum;
                }
            }
        }
        
        // for(int i=0;i<n;i++){
        //     int key = a[i];
        //     for(int j=i+1;j<n;j++){
        //         if(a[j]==key){
        //             count++;
        //         }
        //     }
        // }
        
        cout<<count<<endl;
    }
    return 0;
}


/* Question Link : hackerrank.com/contests/smart-interviews/challenges/si-implement-stack


Perform push and pop operations on stack. Implement Stacks and avoid using inbuilt library.

Input Format

First line of input contains T - number of operations. Its followed by T lines, each line contains either "push x" or "pop".

Constraints

1 <= T <= 10000
-100 <= x <= 100

Output Format

For each "pop" operation, print the popped element, separated by newline. If the stack is empty, print "Empty".

Sample Input 0

8
push 5
pop
pop
push 10
push -15
pop
push -10
pop
Sample Output 0

5
Empty
-15
-10
*/



//Solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[10001]={0};
    int top = -1;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int num;
        if(s=="push"){
            cin>>num;
            top++;
            a[top]=num;
        }else{
            if(top == -1){
                cout<<"Empty"<<endl;
            }else{
                cout<<a[top]<<endl;
                top--;
            }
        }
    }
    return 0;
}







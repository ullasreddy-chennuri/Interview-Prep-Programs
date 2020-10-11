

// Smart interviews question

// Question link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-reverse-the-sentence

/*

Given a sentence, reverse the entire sentence word-by-word.
Note: Solve using stack or in-place swap. Do not simply scan, split and print in reverse order.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, 
each contains a sentence S of space separated words of lowercase english alphabet. All the words are separated by a single space.

Constraints

1 <= T <= 1000
1 <= len(S) <= 1000

Output Format

For each test case, print the reversed sentence, separated by newline.

Sample Input 0

3
hello world
a b c d
data structures and algorithms

Sample Output 0

world hello
d c b a
algorithms and structures data


*/

//Solution

#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
     cin.get();
    while(t--){
        string s;
       
        getline(cin,s);
        string temp="";
        int n=s.length();
        stack <string> sta;
        for(int i=0;i<n;i++){
            temp = temp+s[i];
            if(s[i+1]==' '){
                sta.push(temp);
                temp="";
                i++;
            }
        }
        if(temp!=" "){
             sta.push(temp);
        }
       
        
        while(!sta.empty()){
            cout<<sta.top()<<" ";
            sta.pop();
        }
        
        cout<<endl;
    }
    return 0;
}










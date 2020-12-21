
// Question Link : https://www.hackerrank.com/contests/smart-interviews/challenges/si-collecting-mangoes



#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
        int n;
        cin>>n;
        stack<int> s;
        stack<int> ma;
        int m=0;
        cout<<"Case "<<i++<<":"<<"\n";
        while(n--)
        {
            char st;
            cin>>st;
            if(st=='A')
            {
                int num;
                cin>>num;
                s.push(num);
                if(num>=m)
                {
                    m=num;
                    ma.push(m);
                }
            }
            else if(st=='R')
            {
                if(s.empty())
                {
                    m=0;
                    continue;
                }
                else
                {
                    int temp=s.top();
                    s.pop();
                    
                    if(s.empty())
                        m=0;
                    if(temp==m)
                    {
                        ma.pop();
                        m=ma.top();
                    }
                }
            }
            else
            {
               // cout<<"m="<<m<<"\n";
                if(m!=0)
                    cout<<m<<"\n";
                else
                    cout<<"Empty"<<"\n";
            }
        }
    }
    return 0;
}

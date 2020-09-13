// 999 -> 900
//4545 -> 4444




#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int l =(int)(s[i]-'0');
       if(l>=5){
           l=9-l;
       }
       
       s[i]=(char)(l+'0');
    }

	if(s.front() == '0'){
		s.front() = '9';
	}
    cout<<s<<endl;
}

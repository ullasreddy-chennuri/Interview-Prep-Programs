

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int count = 1;
	for(int i=0;i<s.length();i++){
		if(s[i]==s[i+1]){
			count++;
		}
		if(s[i]!=s[i+1]){
			cout<<s[i]<<count;
			count=1;
		}
	}

}

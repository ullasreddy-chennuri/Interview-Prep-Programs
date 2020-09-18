

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int a[26]={0};
	for(int i=0;i<s.length();i++){
		a[s[i]-'a']++;   //using concept of countsort
	}
  
    int max=0;
    int index=0;
    for(int i=0;i<26;i++){
        if(a[i]>max){
            max=a[i];
            index=i; //finding char which repeated max times
        }
    }

	cout<<char(97+index); //printing the character

}

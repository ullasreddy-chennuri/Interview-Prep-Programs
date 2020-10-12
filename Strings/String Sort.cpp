






#include<bits/stdc++.h>
using namespace std;

bool myCompare(string a, string b) {
    if (a.find(b)==0 || b.find(a)==0)
        return a.length() > b.length();
    return a < b;
}


int main(){
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n,myCompare);

	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}

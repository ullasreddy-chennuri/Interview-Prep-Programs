

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000001];
	int b[3]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]++;
	}

	for(int i=0;i<3;i++){
		while(b[i]--){
			cout<<i<<endl;
		}
	}
}

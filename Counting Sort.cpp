

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000001];
	int b[1000001]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
	}

	for(int i=1;i<1000001;i++){
		if(b[i]>0){
			while(b[i]--){
				cout<<i<<" ";
			}
			
		}
	}
}

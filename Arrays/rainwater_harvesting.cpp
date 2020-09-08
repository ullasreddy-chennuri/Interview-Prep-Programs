

#include<bits/stdc++.h>
using namespace std;
	int a[1000000];
	int l[1000000];
	int r[1000000];
int main(){
	
	int n;
	cin>>n;
  // store the each elements leftmost max element and right most
  // max element in the arrays l[],r[]
  //then compute the count using both arrays.
  
  //TC : O(n)
  //SC : O(n)
  
	cin>>a[0];
	l[0]=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		l[i]=max(l[i-1],a[i]);
	}

	r[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--){
		r[i]=max(r[i+1],a[i]);
	}

	// for(int i=0;i<n;i++){
	// 	cout<<l[i]<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<n;i++){
	// 	cout<<r[i]<<" ";
	// }

	int count =0;
	for(int i=0;i<n;i++){
		count += min(l[i],r[i])-a[i];
	}

	cout<<count<<endl;

}

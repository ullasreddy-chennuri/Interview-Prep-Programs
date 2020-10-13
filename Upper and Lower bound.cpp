

#include<bits/stdc++.h>
using namespace std;


int lower_b(int a[],int n,int k){
int s=0;
int e=n-1;
int ans=-1;
while(s<=e){
	int mid=(s+e)/2;
	if(a[mid]==k){
		ans=mid;
		e=mid-1;
	}else if(a[mid]>k){
		e=mid-1;
	}else{
		s=mid+1;
	}
}
return ans;
}


int upper_b(int a[],int n,int k){
int s=0;
int e=n-1;
int ans=-1;
while(s<=e){
	int mid=(s+e)/2;
	if(a[mid]==k){
		ans=mid;
		s=mid+1;
	}else if(a[mid]>k){
		e=mid-1;
	}else{
		s=mid+1;
	}
}
return ans;
}



int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int q;
	cin>>q;
	while(q--){
		int k;
		cin>>k;
		cout<<lower_b(a,n,k)<<" ";
		cout<<upper_b(a,n,k);
		cout<<endl;
	}
}

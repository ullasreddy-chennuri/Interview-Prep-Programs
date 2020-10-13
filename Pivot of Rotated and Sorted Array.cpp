

#include<bits/stdc++.h>
using namespace std;

int pivot_sorted(int a[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]<a[mid-1]){
			return mid-1;
		}
		if(a[mid]>a[mid+1]){
			return mid;
		}
		if(a[s]<=a[mid]){
			s = mid+1;
		}else{
			e = mid-1;
		}
	}

	return -1;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<pivot_sorted(a,n);
}

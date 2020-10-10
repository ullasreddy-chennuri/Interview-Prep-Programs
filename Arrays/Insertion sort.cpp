

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n){
	int var,j;
	for(int i=1;i<n;i++){
		var = a[i];
		j = i;
		while(a[j-1]>var && j>=1){
			a[j]=a[j-1];
			j--;
		}
		a[j]=var;
	}
	
	return;
}

int main(){
	 int n;
	cin>>n;
	 int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	insertion_sort(a,n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

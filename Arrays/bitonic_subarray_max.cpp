

#include<bits/stdc++.h>
using namespace std;

int bitonic_max(int a[],int n){

	// take inc and dec arrays for counting incresed numbers and decreased numbers at each index

	int inc[n];
	int dec[n];
	inc[0]=1;
	dec[n-1]=1;

	//inc array

	for(int i=1;i<n;i++){
		if(a[i]>=a[i-1]){
			inc[i]=inc[i-1]+1;
		}else{
			inc[i]=1;
		}
	}

	//dec array

	for(int i=n-2;i>=0;i--){
		if(a[i]>=a[i+1]){
			dec[i]=dec[i+1]+1;
		}else{
			dec[i]=1;
		}
	}

	//finding max length 
	
	int max=inc[0]+dec[0]-1;
	for(int i=1;i<n;i++){
		if((inc[i]+dec[i]-1)>max){
			max = inc[i]+dec[i]-1;
		}
	}

	return max;
}


int main(){

int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	int a[1000001];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<bitonic_max(a,n)<<endl;	
}

}

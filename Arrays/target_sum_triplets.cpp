// Find all the triplets from given array whose sum is equal to the given sum.

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int sum;
	cin>>sum;
  
  // take a number from array and search for other two numbers through 2-pointer approach
  //TC : O(n^2)
  
	for(int itr=0;itr<n-1;itr++){
		int k=a[itr];
		int i=itr+1;
		int j=n-1;
		int key=sum-k;
		while(i<j){
			if(a[i]+a[j]==key){
				cout<<k<<", "<<i<<" and "<<j<<endl;
				i++;
				j--;
			}
			else if(a[i]+a[j]>key){
				j--;
			}
			else{
				i++;
			}
		}

	}
}

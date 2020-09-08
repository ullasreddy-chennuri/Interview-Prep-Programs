

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int a[n];
		long long int curSum=0;
		long long int maxSum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<n;i++){

			curSum+=a[i];

				if(curSum<0){
					curSum=0;
				}

				maxSum=max(curSum,maxSum);
		}
		cout<<maxSum<<endl;
	}
}

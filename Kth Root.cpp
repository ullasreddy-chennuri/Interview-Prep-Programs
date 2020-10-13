

#include<bits/stdc++.h>
using namespace std;

long long int k_root(long long int n,long long int k){
	long long int start = 0;
	long long int end = sqrt(n);
	long long int ans = 1;
	while(start <= end){
		long long int mid = (start+end)/2;
		long long int temp = mid;
		long long int tempo = k;
		while(tempo>1){
			temp *= mid;
			if(temp>n){
				break;
			}
			tempo--;
		}
		if(temp==n){
			return mid;
		}else if(temp < n){
			ans = mid;
			start = mid+1;
		}else if(temp>n){
			end = mid-1;
		}
	}

	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int k;
		cin>>k;
		if(k==1){
			cout<<n<<endl;
		}else{
			cout<<k_root(n,k)<<endl;
		}
		
	}
}

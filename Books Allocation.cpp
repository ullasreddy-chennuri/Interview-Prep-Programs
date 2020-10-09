

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int a[],int n,int m,int cur_min){
	int students_used = 1;
	int pages_read = 0;

	for(int i=0;i<n;i++){
		if(pages_read + a[i] > cur_min){
			students_used++;
			pages_read= a[i];
			if(students_used>m){
				return false;
			}
		}else{
			pages_read+=a[i];
		}
	}


	return true;
}



int findPages(int a[],int n,int m){
	int sum =0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}

	int s=a[n-1];
	int e=sum;
	int ans = INT_MAX;
	while(s<=e){
		int mid = (s+e)/2;

		if(isPossible(a,n,m,mid)){
			ans = min(ans,mid);	// min no of pages to be provided
			e=mid-1;
		}else{

			// not possible to divide at x pages
			//so increase the no of pages

			s=mid+1;
		}
	}

	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[1000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<findPages(a,n,m)<<endl;
	}
}



#include<bits/stdc++.h>
using namespace std;

bool sort_by_sec(const pair<int,int>&a,const pair<int,int>&b){
	return a.second<b.second;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100000];
		int b[100000];
		for(int i=0;i<n;i++){
			cin>>a[i]>>b[i];
		}

		vector< pair<int,int> > arr;
		for(int i=0;i<n;i++){
			arr.push_back(make_pair(a[i],b[i]));
		}

		sort(arr.begin(),arr.end(),sort_by_sec);

		int count = 1;
		int end = arr[0].second;
		for(int i=1;i<n;i++){
			if(end<=arr[i].first){
				end=arr[i].second;
				count++;
			}
		}
		cout<<count<<endl;
	}
}

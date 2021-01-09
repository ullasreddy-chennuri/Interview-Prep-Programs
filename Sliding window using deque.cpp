
//Question link from SPOJ 
//prob name : ARRAYSUB
// link for question : https://www.spoj.com/problems/ARRAYSUB/




#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code here
	int n;
	int a[100000];
	int k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	deque<int> Q(k);
	int i;
	for(i=0;i<k;i++){
		while((!Q.empty() && a[i]>a[Q.back()])){
			Q.pop_back();
		}
		Q.push_back(i);
	}
	for(;i<n;i++){
		cout<<a[Q.front()]<<" ";
		
		//1. Remove ele which are not part of this window(contraction)
		while((!Q.empty() && Q.front()<=i-k)){
			Q.pop_front();
		}
		
		//2.Remove ele which are not useful and are in window
		
		while((!Q.empty() && a[i]>=a[Q.back()])){
			Q.pop_back();
		}
		
		//Adding the new ele to window
		Q.push_back(i);
	}
	
	cout<<a[Q.front()]<<endl;

	return 0;
}

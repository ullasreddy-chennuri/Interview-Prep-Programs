

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		 long long int a[10000];
		 long long int curSum=0;
		 long long int maxSum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
        int itr=0;
        while(itr<n){
             curSum=0;
            int i = itr;
            do{
                curSum+=a[i%n];
				if(curSum<0){
					curSum=0;
				}
			    maxSum=max(curSum,maxSum);
			 //   cout<<maxSum<<endl;
			    i++;
            }while((i%n)!=itr);
            itr++;
        }
	
		cout<<maxSum<<endl;
	}
}

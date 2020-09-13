

#include<bits/stdc++.h>
using namespace std;

int stairSearch(int a[][30],int m,int n,int k){
    
    int i=0;
    int j=n-1;
    
    while(i<m && j>=0){
        if(a[i][j]==k){
            return 1;
        }else if(a[i][j]>k){
            j--;
        }else{
            i++;
			      j=n-1;    // after moving to new row start searching from end of column again
        }
    }
    
    return -1;

}

int main(){
     int a[30][30],n,m;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
	int key;
    cin>>key;
    if(stairSearch(a,m,n,key)!=-1){
		cout<<"1";
	}else{
		cout<<"0";
	}
    return 0;
}

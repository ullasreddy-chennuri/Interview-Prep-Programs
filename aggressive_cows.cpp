//SPOJ --> http://www.spoj.com/problems/AGGRCOW/

#include<bits/stdc++.h>
using namespace std;

//checking if distance min_sep is possible or not

bool agg_cow(int a[],int n,int c,int min_sep){
    int last_cow=a[0];
    int count=1;
    for(int i=0;i<n;i++){
        if(a[i]-last_cow>=min_sep){
            last_cow = a[i];
            count++;
            if(count == c){
                return true;
            }
        }
    }

    return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        int a[1000000];
        cin>>n>>c;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        //binary search algorihtnm implementation
        int s=0;
        int e=a[n-1]-a[0];
        int ans=0;
        while(s<=e){
            int mid = (s+e)/2;
            bool isOkay = agg_cow(a,n,c,mid);
            if(isOkay){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}

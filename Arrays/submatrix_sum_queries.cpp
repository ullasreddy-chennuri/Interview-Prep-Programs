
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int query;
    cin>>query;

    int a[1000][1000];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    //making a prefix sum matrix
    //column wise sum

    for(int i=0;i<m;i++){
        for(int j=1;j<n;j++){
            a[i][j]+=a[i][j-1];
        }
    }

    //row wise sum
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]+=a[i-1][j];
        }
    }

    while(query--){
        int tli,tlj,bri,brj; // top left and bottom right co-ordinates/indices
        cin>>tli>>tlj>>bri>>brj;
        int s1=a[bri][brj];
        int s2=a[tli-1][tlj-1];
        int s3=a[tli-1][brj];
        int s4=a[bri][tlj-1];

        cout<<(s1-s3-s4+s2)<<endl;
    }
}

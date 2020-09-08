#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicates(char a[]){
    int l=strlen(a);
    if(l==0||l==1){
        return;
    }
    int prev = 0;
    for(int i=1;i<l;i++){
        if(a[prev]!=a[i]){
            prev++;
            a[prev]=a[i];
        }
    }
    a[prev+1]='\0';
    return;
}

int main(){
    char a[1000];
    cin.getline(a,1000);
    removeDuplicates(a);
    cout<<a;
}

#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){
    char str[100] ;
    cin.getline(str,100);
    char *ptr = strtok(str," ");
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }
}

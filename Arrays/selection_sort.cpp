#include<iostream>
using namespace std;

void selection_sort(int a[],int n){

    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i;j<n;j++){
            if(a[i]<a[min_index]){
                min_index = i;
            }
        }

        swap(min_index,i);
    }
}



int main(){

    int n;
    cin>>n;
    int a[1000];
    cout<<"Enter array elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    selection_sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

}

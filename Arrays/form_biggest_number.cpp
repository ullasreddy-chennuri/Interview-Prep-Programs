

#include<bits/stdc++.h>
using namespace std;

int MyCompare(string X,string Y){
  
  //comparing two strings
  
	string XY = X.append(Y);
	string YX = Y.append(X);

  //returning the largest string using inbuilt comapre function
  
	return (XY.compare(YX)>0?1:0);
}

void print_largest(vector<string> a){

  //sort the vector string with compare function written manually
  
	sort(a.begin(),a.end(),MyCompare);

	for(int i=0;i<a.size();i++){
		cout<<a[i];
	}
}



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		vector<string> a;
    
    //taking input as string in a vector
    
		for(int i=0;i<n;i++){
		    string temp;
		    cin>>temp;
			  a.push_back(temp);
		}

		print_largest(a);
		cout<<endl;
	}
}

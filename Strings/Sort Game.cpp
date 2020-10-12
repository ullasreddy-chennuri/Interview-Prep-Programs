

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(pair<string,int> s1,pair<string,int> s2)
{
	int sal1=s1.second;
	int sal2=s2.second;
	if(sal1==sal2)
	{
		string emp1,emp2;
		emp1=s1.first;
		emp2=s2.first;
		return emp1<emp2;
	}
	return sal1>sal2;
}
int main() {
	int x;
	cin>>x;
	int n;
	cin>>n;
	pair<string,int> e[100005];
	for(int i=0;i<n;i++)
	{	string s;
		// getline(cin,s);//this is the error .
        cin>>s;
		e[i].first = s;
		int sal;
		cin>>sal;
		e[i].second=sal;
	} 
    sort(e,e+n,compare);
	for(int i=0;i<n;i++)
	{
		if(e[i].second>=x)
		{
			
			cout<<e[i].first<<" "<<e[i].second<<endl;
		}

	}
	return 0;
}

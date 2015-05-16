#include<iostream>
#include<iterator>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	int n,a[1000],t,m,i,j;
	set<int> s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>t;
		for(j=0;j<t;j++)
		{
			cin>>m;
			s.insert(m);
		}
	}
	s.insert(a,a+n);
	cout<<s.size()-n;
	return 0;
}

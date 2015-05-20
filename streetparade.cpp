#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
	long int a[1000],f,j,i,b[1000],n;
	stack<long int> s1,s2;
	for(;;)
	{
		f=0;
		cin>>a[i];
		if(a[i]==0)
		break;
		n=a[i];
		for(j=0;j<n;j++)
		cin>>b[j];
		s1.push(b[0]);
		for(j=1;j<n;j++)
		{
			if(b[j]==1||b[j]==s2.top()+1)
			s2.push(b[j]);
			else
			s1.push(b[j]);
		}
		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		for(j=n;j>0;j--)
		{
			if(s2.top()!=j)
			f=1;
			else
			s2.pop();
		}
		if(f==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}

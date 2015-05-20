#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int main()
{
	unsigned long int n,i;
	cin>>n;
	char a[1000];
	for(i=0;i<n;i++)
	cin>>a[i];
	stack<char> s;
	s.push(a[0]);
	for(i=1;i<n;i++)
	{
		if(s.top()==a[i])
		{
			s.pop();
		}
		else
		s.push(a[i]);
	}
	if(s.empty())
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}

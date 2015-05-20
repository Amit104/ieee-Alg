#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j;
        cin >>n;
        pair<long long int,long long int> p[10000];
        for(i=0;i<n;i++)
        {
            cin>>p[i].first>>p[i].second;
        }
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(p[j].second>p[j+1].second)
				{
					swap(p[j],p[j+1]);
				}
			}
		}
		int k=1;
		long long int s=p[0].second;
		for(i=1;i<n;i++)
		{
			if(p[i].first==p[i-1].first)
			{
				s=s+p[i].second*k;
			}
			else
			{
				k++;
				s=s+p[i].second*k;
            } 

		}
		cout<<s;
	}
	return 0;
}

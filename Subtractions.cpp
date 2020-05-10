#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int res=0;
		long int a,b;
		cin>>a>>b;
			
		while(a!=0&&b!=0)
		{

			if(b>a)
		{
			int t=b/a;
			b=b-a*t;
			res+=t;
		}		
		else
		{
			int t=a/b;
			a=a-b*t;
			res+=t;
		}
		}
		cout<<res<<"\n";

	}
	return 0;
}
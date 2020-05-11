#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,x,y;
		cin>>x>>y;
		cin>>a>>b;
		long long int res1,res2;
		res1=res2=0;

			res2=a*(x+y);
			if(x!=0||y!=0)
			{
				if(x<y)
				{
					res1=x*b;
					y=y-x;
					x=0;
					res1+=y*a;
					y=0;
				}
				else
				{
					res1=y*b;
					x=x-y;
					y=0;
					res1+=x*a;
					x=0;
				}
			}
			
		cout<<min(res1,res2)<<"\n";
		
	}
	return 0;
}
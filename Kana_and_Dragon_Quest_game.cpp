#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,n,m;
		cin>>h>>n>>m;
		if(h-m*10<=0)
			cout<<"YES\n";
		else
		{
			int f=0;
			for(int i=0;i<n;i++)
			{	
				h=h/2+10;
				if(h-m*10<=0)
				{
					f=1;
					cout<<"YES\n";
					break;
				}
			}
			if(f==0)
				cout<<"NO\n";
		}


	}
	return 0;
}
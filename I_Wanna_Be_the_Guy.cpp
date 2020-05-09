#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	int f=0;
	cin>>n;
	int A[n]={0};
	int p;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>x;
		A[x-1]=1;
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>x;
		A[x-1]=1;
	}

	for(int i=0;i<n;i++)
	{
		if(A[i]!=1)
		{
			f=1;
			cout<<"Oh, my keyboard!";
			break;
		}
	}
	if(f==0)
		cout<<"I become the guy.";
	return 0;
}
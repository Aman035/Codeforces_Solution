#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;

int main()
{
    fast
    int n,q,k;
    cin>>n>>q>>k;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    	cin>>A[i];

    

    if(n==1)
    {
    	while(q--)
    	{
    		int l,r;
    		cin>>l>>r;
    		cout<<k-1<<"\n";
    	}
    }
    else
    {
    	vector<ll>ans(n,0);
    	for(int i=0;i<n;i++)
	    {
	    	if(i==0)
	    		ans[i] = A[1]-2;
	    	else
	    	{
	    		if( i == n-1)
	    			ans[i] =  k-A[n-2]-1;
	    		else
	    		{
	    			ans[i] = A[i+1]-A[i-1]-2;
	    		}
	    	}
	    }
	    for(int i=1;i<n;i++)
	    	ans[i]+=ans[i-1];

	    while(q--)
	    {
	    	int l,r;
	    	cin>>l>>r;
	    	l--;
	    	r--;
	    	if(l==0 && r==n-1)
	    	{
	    		cout<<ans[n-1]<<"\n";
	    		continue;
	    	}
	    	if(l==r)
	    	{
	    		cout<<k-1<<"\n";
	    		continue;
	    	}
	    	else
	    	{
	    		ll res=0;
	    		if(l==0)
	    		{
	    			res = ans[r-1]+k-A[r-1]-1;
	    		}
	    		else
	    		{
	    			if(r == n-1)
	    			{
	    				res = ans[r]-ans[l]+A[l+1]-2;
	    			}
	    			else
	    			{
	    				res = ans[r-1]-ans[l]+k-A[r-1]-1 + A[l+1]-2;
	    			}
	    		}
	    		cout<<res<<"\n";
	    	}
	    }
    }

    
   
    return 0;
}

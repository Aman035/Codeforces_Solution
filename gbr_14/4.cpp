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
    int t;
    cin>>t;
    while(t--)
    {
    	int n,l,r;
    	cin>>n>>l>>r;
    	int ls[n+1],rs[n+1];

    	for(int i=0;i<=n;i++)
    	ls[i] = rs[i] = 0;

    	for(int i=0;i<l;i++)
    	{
    		int x;
    		cin>>x;
    		ls[x]++;
    	}

    	for(int i=0;i<r;i++)
    	{
    		int x;
    		cin>>x;
    		rs[x]++;
    	}

    	int s1,s2;
    	s1 = s2 = 0;
    	for(int i=0;i<=n;i++)
    	{
    		int mn = min(ls[i] , rs[i]);
    		ls[i]-=mn;
    		rs[i]-=mn;
    		s1+=ls[i];
    		s2+=rs[i];
    	}
    	int ans = 0;

    	int md = (s1+s2)/2;
    	int need = abs(s1-md);

    	if(s1>s2)
    	{
    		for(int i=1;i<=n;i++)
    		{
    			int x = ls[i]/2;
    			if(x<need)
    			{
    				ans+=x;
    				ls[i]-=x*2;
    				need-=x;
    			}
    			else
    			{
    				ans+=need;
    				ls[i]-=need*2;
    				need = 0;
    			}
    		}
    	}
    	else
    	{
    		for(int i=1;i<=n;i++)
    		{
    			int x = rs[i]/2;
    			if(x<need)
    			{
    				ans+=x;
    				rs[i]-=x*2;
    				need-=x;
    			}
    			else
    			{
    				ans+=need;
    				rs[i]-=need*2;
    				need = 0;
    			}
    		}
    	}

    	s1 = s2 = 0;
    	for(int i=1;i<=n;i++)
    	{
    		s1+=ls[i];
    		s2+=rs[i];
    	}

    	if(s1 > s2)
    	{
    		ans+=s2;
    		s1 = s1-s2;
    		ans+=s1;
    	}
    	else
    	{
    		ans+=s1;
    		s2 = s2-s1;
    		ans+=s2;
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}

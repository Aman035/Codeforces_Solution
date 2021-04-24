#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define m 1000000007
using namespace std;

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<int>A(n);
    	map<int,int>pr;
    	for(int i=0;i<n;i++)
    	{
    		cin>>A[i];
    		pr[A[i]]++;
    	}	

    	int x=A[0];

    	for(int i=1;i<n;i++)
    		x = x&A[i];

    	ll ans = 0;
    	if(pr[x]>=2)
    	{
    		ans+=(ll)pr[x]*(pr[x]-1);
    		ans%=m;
    		for(int i=1;i<=n-2;i++)
    		{
    			ans = (ll)ans*i;
    			ans%=m;
    		}
    	}
    	cout<<ans<<"\n";
    	

    }
    return 0;
}

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
    	ll n;
    	cin>>n;

    	if(n%2050 == 0)
    	{
    		ll y = n/2050;
    		ll z = 2050*1e15;

    		ll ans = 0;

    		while(n!=0)
    		{
    			ll a = n/z;
    			ans+=a;
    			n = n-a*z;
    			z/=10;
    		}
    		cout<<ans<<"\n";
    	}	
    	else
    		cout<<"-1\n";
    }
    return 0;
}

#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
ll digsum(ll n)
{
	ll ans = 0;
	while(n)
	{
		ans+=n%10;
		n/=10;
	}
	return ans;
}
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	while(1)
    	{
    		ll y = digsum(n);
    		ll z = __gcd(n,y);
    		if(z>1)
    		{
    			cout<<n<<"\n";
    			break;
    		}
    		n++;
    	}
    }
    return 0;
}

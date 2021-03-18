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
    	int n,k1,k2;
    	int w,b;
    	cin>>n>>k1>>k2>>w>>b;
    	int a,c;
    	a = n-k1;
    	c = n-k2;
    	ll x = min(k1,k2);
    	k1-=x;
    	k2-=x;
    	x+=k1/2;
    	x+=k2/2;

    	ll y = min(a,c);
    	a-=y;
    	c-=y;
    	y+=a/2;
    	y+=c/2;

    	if(x>=w && y>=b )
    	{
    		cout<<"YES\n";
    	}
    	else
    		cout<<"NO\n";

    }
    return 0;
}

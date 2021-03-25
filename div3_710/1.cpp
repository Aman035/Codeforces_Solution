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
    	ll n,m,x;
    	cin>>n>>m>>x;
    	ll col,row,ans;
    	if(x%n==0)
    	{
    		col = x/n;
    		 row = n-1;
    		ans = row*m+col;
    		cout<<ans<<"\n";
    	}
    	else
    	{
    		col = x/n+1;
    		row = x%n-1;
    		ans = row*m+col;
    		cout<<ans<<"\n";

    	}
    }
    return 0;
}

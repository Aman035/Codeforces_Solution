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
    	int n,m,k;
    	cin>>n>>m>>k;
    	ll ans = n*m-1;

    	if(k == ans)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
    return 0;
}

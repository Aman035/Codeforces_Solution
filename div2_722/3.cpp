#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1e9+7
#define N  100000
using namespace std;
pp range[N];
vector<vector<int>>g;
pair<ll,ll> dp[N+1];
void solve(int x,int p)
{
    dp[x] = {0,0};
    int l = range[x-1].first;
    int r = range[x-1].second;

    for(int i=0;i<g[x].size();i++)
    {
        int y = g[x][i];
        if(y == p)
            continue;

        solve(y,x);

        int lx = range[y-1].first;
        int rx = range[y-1].second;

        dp[x].first += max((ll)dp[y].first + abs(l - lx) ,(ll) dp[y].second+ abs(l - rx));
        dp[x].second += max((ll)dp[y].first + abs(r - lx) , (ll)dp[y].second + abs(r - rx));
    }
}


int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; 
        g.clear();
        g.resize(n+1);

        for(int i=0;i<n;i++)
            cin>>range[i].first>>range[i].second;

        for(int i=0;i<n-1;i++)
        {
            int x,y;
            cin>>x>>y;
            g[x].pb(y);
            g[y].pb(x);
        }
        solve(1,-1);
        ll ans = max(dp[1].first , dp[1].second);
        cout<<ans<<"\n";
    }
    
    return 0;
}

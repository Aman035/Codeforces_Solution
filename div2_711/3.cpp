#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
using namespace std;
int n,k;
int dp[1001][1001][2];
int solve(int curr, int k, int dir) {
    if (k == 1) {
        return 1;
    }

    if (dp[curr][k][dir] != -1) {
        return dp[curr][k][dir];
    }

    int ans = 2;  // me and my copy

    if (dir == 1) {
        if (curr < n)
            ans += solve(curr + 1, k, dir) - 1;

        ans %= mod;

        if (curr > 1)
            ans += solve(curr - 1, k - 1, 1 - dir) - 1;

        ans %= mod;
        dp[curr][k][dir] = ans;
    } else {
        if (curr > 1)
            ans += solve(curr - 1, k, dir) - 1;

        ans %= mod;

        if (curr < n)
            ans += solve(curr + 1, k - 1, 1 - dir) - 1;

        ans %= mod;
        dp[curr][k][dir] = ans;
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
        cin>>n>>k;
        memset(dp, -1, sizeof(dp));
        int res = solve(1,k,1);
        cout<<res<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
ll dp[5001][5001];
int n;
int main()
{
    fast
    cin>>n;
    vector<ll>A(n+1),B(n+1);
    for(int i=0;i<=5000;i++)
        for(int j=0;j<=5000;j++)
            dp[i][j] = 0;
    for(int i=1;i<=n;i++)
        cin>>A[i];
    for(int i=1;i<=n;i++)
        cin>>B[i];

    vector<ll>prefix(n+2 , 0) , suffix(n+2 , 0);

    for(int i=1;i<=n;i++)
        prefix[i] = prefix[i-1]+A[i]*B[i];

    for(int i=n;i>=1;i--)
        suffix[i] = suffix[i+1] + A[i]*B[i];

    ll ans = INT_MIN;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i == j)
                dp[i][j] = A[i]*B[j];
            else
                dp[i][j] = dp[i-1][j+1] + A[i]*B[j] + A[j]*B[i];

            ans = max(ans , dp[i][j] + prefix[j-1] + suffix[i+1]);
        }
    }

    cout<<ans<<"\n";

    return 0;
}

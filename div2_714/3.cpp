#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;

//digit 3 extended m times is digit 2 extended m+1 times or digit 1 extended m+2 times and so on

int main()
{
    fast
    vector<ll>dp(200001 ,  0);

    int s = 0;
    //count of each dig
    vector<ll>A(10,0);
    A[0] = 1;
    while(s!=200011)//till m+9 (took some extra)
    {
        ll x = A[9];
        A[9] = 0;

        //generating of digits at each step
        for(int i=9;i>=1;i--)
            A[i]=A[i-1];

        A[0]=x%M;
        A[1] = (x+A[1])%M;
        s++;

        for(int i=0;i<=9;i++)
        {
            dp[s]+=A[i];
            dp[s]%=M;
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
    	int n,m;
    	cin>>n>>m;
        ll ans = 0;
    	while(n)
    	{
            int k = n%10;
            ans+= (ll)dp[m+k];
    		ans%=M;
    		n/=10;
    	}
        cout<<ans<<"\n";
    }
    return 0;
}

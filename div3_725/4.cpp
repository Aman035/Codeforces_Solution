#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(int i=a;i<n;i++)
#define ll long long
#define M 1000000007
using namespace std;
long pF(int n)
{
    ll ans = 0;
    while (n % 2 == 0)
    {
        ans++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            ans++;
            n = n/i;
        }
    }
 
    if (n > 2)
        ans++;

    return ans;
}
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
    	int a,b,k;
        cin>>a>>b>>k;
        if(a ==1 && b == 1)
        {
            cout<<"NO\n";
        }
        else
        {
            int mn;

            if(a!=b && (a%b == 0 || b%a == 0))
                mn = 1;
            else
                mn = 2;

            ll mx = pF(a) + pF(b);
            if(k>=mn && k<=mx)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}

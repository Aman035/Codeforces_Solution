#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(int i=a;i<n;i++)
#define ll long long
#define M 1000000007
using namespace std;
ll solve(int x)
{
    ll ans = 0;
    ll st = 1;
    while(x)
    {
        ans +=(x%10)*st;
        st = st*10+1;
        x/=10;
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
    	int l,r;
        cin>>l>>r;
        cout<<solve(r)-solve(l)<<"\n";
        
    }
    return 0;
}

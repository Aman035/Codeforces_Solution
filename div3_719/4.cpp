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
    	int n;
    	cin>>n;
    	vector<int>A(n+1,0);
    	ll ans = 0;
    	map<ll,ll>mps;
    	for(int i=1;i<=n;i++)
    	{
    		cin>>A[i];
    		ans+=mps[A[i]-i];
    		mps[A[i]-i]++;
       	}
       	cout<<ans<<"\n";
    	
    }
    return 0;
}

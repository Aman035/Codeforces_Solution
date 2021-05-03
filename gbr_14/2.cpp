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

    set<ll>ans;

    ll i = 1;
    while(1)
    {
    	if(i%2 == 0)
    		ans.insert(i*i);
    	ans.insert(i*i*2);

    	if(i*i > 1e9)
    		break;
    	i++;
    }

    // for(auto it : ans)
    // 	cout<<it<<" ";

    while(t--)
    {
    	ll n;
    	cin>>n;
    	
    	if(ans.find(n)!=ans.end())
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
    return 0;
}

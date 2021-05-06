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
    	string s;
    	cin>>s;
    	vector<int>sheeps;
    	for(int i=0;i<n;i++)
    	{
    		if(s[i] == '*')
    			sheeps.pb(i+1);
    	}
    	ll ans = 0;
    	int k = sheeps.size();
    	if(k == 0)
    	{
    		cout<<"0\n";
    		continue;
    	}
    	int pos = sheeps[k/2];
    	if(sheeps.size()%2==0)
    	{
    		for(int i=pos+1;i<pos+k/2;i++)
    			ans+= (ll)sheeps[k/2 + i-pos]-i;

    		for(int i=pos-1;i>=pos-k/2;i--)
    			ans+=(ll) i - sheeps[k/2 - (pos-i) ];
    	}
    	else
    	{
    		
    		for(int i=pos+1;i<=pos+k/2;i++)
    			ans+=(ll) sheeps[k/2 + i-pos]-i;

    		for(int i=pos-1;i>=pos-k/2;i--)
    			ans+=(ll) i - sheeps[k/2 - (pos-i) ];
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}

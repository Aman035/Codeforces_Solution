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
    	n+=2;
    	vector<int>A(n);

    	for(int i=0;i<n;i++)
    	cin>>A[i];

    	sort(A.begin(),A.end());

    	int mx = A[n-1];

    	map<ll,int>pr;
    	ll sum = 0;
    	for(int i=0;i<n-1;i++)
    	{
    		pr[A[i]] = 1;
    		sum+=(ll)A[i];
    	}
    	vector<int>ans;
    	if(sum > mx && pr[sum-mx] == 1)
    	{
    		ll x = sum-mx;
    		bool f =0;

    		for(int i=0;i<n-1;i++)
    		{
    			if(A[i] == x && f == 0)
    			{
    				f=1;
    				continue;
    			}
    			ans.pb(A[i]);
    		}

    	}	
    	else
    	{
    		mx = A[n-2];
    		sum-=(ll)mx;

    		if(sum == mx)
    		{
    			for(int i=0;i<n-2;i++)
    				ans.pb(A[i]);
    		}
    		else
    		{
    			cout<<-1<<"\n";
    			continue;
    		}
    	}

    	for(int i=0;i<ans.size();i++)
    		cout<<ans[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}

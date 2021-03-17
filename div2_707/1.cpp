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
    	vector<pp>A;
    	vector<int>B(n);

    	for(int i=0;i<n;i++)
    	{
    		int x,y;
    		cin>>x>>y;
    		A.pb({x,y});
    	}
    	for(int i=0;i<n;i++)
    	{
    		cin>>B[i];
    	}
    	ll time = 0;
    	ll ans = 0;
    	for(int i=0;i<n;i++)
    	{
    		if(i==0)
    		{
    			time = A[i].first+B[0];
    			// cout<<time<<"\n";
    		}
    		else
    		time+= A[i].first - A[i-1].second + B[i];

    		if(i==n-1)
    			ans = time;
    		ll tmp = (A[i].second - A[i].first);
    		if(tmp%2)
    			tmp++;
    		tmp/=2;

    		time+=tmp;

    		if(time < A[i].second)
    			time = A[i].second;

    		// time = max(time ,(ll) A[i].second);

    		// cout<<time<<"\n";
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}

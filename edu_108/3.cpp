#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
bool cmp(vector<ll>x , vector<ll>y)
{
	return x.size()>y.size();
}
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;

    	vector<ll>A[n+1];
    	int x[n];
    	ll y[n];

    	for(int i=0;i<n;i++)
    		cin>>x[i];

    	for(int i=0;i<n;i++)
    		cin>>y[i];

    	for(int i=0;i<n;i++)
    		A[x[i]].pb(y[i]);


    	for(int i=1;i<=n;i++)
    		sort(A[i].begin() , A[i].end() , greater<ll>());

    	sort(A , A+n+1 , cmp);

    	for(int i=0;i<=n;i++)
    	{
    		for(int j=1;j<A[i].size();j++)
    			A[i][j]+=A[i][j-1];
    	}

    	for(int i=1;i<=n;i++)
    	{
    		ll sum = 0;
    		for(int j=0;j<=n;j++)
    		{
    			int x = A[j].size() - A[j].size()%i;
    			if(x<=0)
    				break;
    			sum+=A[j][x-1];
    		}
    		cout<<sum<<" ";

    	}
    	cout<<"\n";

    }
    return 0;
}

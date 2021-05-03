#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
struct data{
	int val;
	int index;
};
bool cmp(data a , data b)
{
	if(a.val!=b.val)
		return a.val>b.val;
	return a.index < b.index;
}
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m,x;
    	cin>>n>>m>>x;
    	priority_queue <pp, vector<pp>, greater<pp> > pq;
    	vector<data>A;
    	for(int i=0;i<n;i++)
    	{
    		int x;
    		cin>>x;
    		A.pb({x,i+1});
    	}

    	for(int i=0;i<m;i++)
    		pq.push({0,i+1});

    	sort(A.begin() , A.end() , cmp);
    	vector<int>ans(n+1 , 0);
    	for(int i=0;i<n;i++)
    	{
    		pp x = pq.top();
    		pq.pop();

    		x.first+=A[i].val;
    		ans[A[i].index - 1] = x.second;
    		pq.push(x);
    	}

    	int mn = pq.top().first;

    	int mx = INT_MIN;

    	while(!pq.empty())
    	{
    		mx = max(mx , pq.top().first);
    		pq.pop();
    	}

    	if(mx -mn > x)
    	{
    		cout<<"NO\n";
    	}
    	else
    	{
    		cout<<"YES\n";
    		for(int i=0;i<n;i++)
    			cout<<ans[i]<<" ";
    		cout<<"\n";
    	}


    }
    return 0;
}

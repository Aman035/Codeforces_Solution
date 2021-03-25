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
    	vector<int>A(n);
    	for(int i=0;i<n;i++)
    		cin>>A[i];

    	vector<bool>vis(n+1,0);
    	vector<int>ans(n,0);
    	ans[0] = A[0];
    	vis[0]=vis[A[0]]=1;

    	for(int i=1;i<n;i++)
    	{
    		if(A[i]==A[i-1])
    			continue;
    		ans[i] = A[i];
    		vis[A[i]]=1;
    	}

    	vector<int>ans1,ans2;
    	ans1 = ans2 = ans;

    	set<int>c;
    	for(int i=1;i<=n;i++)
    	{
    		if(!vis[i])
    			c.insert(i);
    	}

    	set<int>sc = c;

    	for(int i=0;i<n;i++)
    	{
    		if(ans1[i] == 0)
    		{
    			auto it = c.begin();
    			ans1[i] = *it;
    			c.erase(it);
    		}
    	}


    	int last_placed;
    	for(int i=0;i<n;i++)
    	{
    		if(ans2[i] == 0)
    		{
    			auto it = sc.lower_bound(last_placed);//gives just greater
    			it--; // just smaller
    			ans2[i] = *it;
    			sc.erase(it);
    		}
    		else
    		last_placed = ans2[i];
    	}


    	for(int i=0;i<n;i++)
    		cout<<ans1[i]<<" ";
    	cout<<"\n";

    	for(int i=0;i<n;i++)
    		cout<<ans2[i]<<" ";
    	cout<<"\n";
    }

    return 0;
}

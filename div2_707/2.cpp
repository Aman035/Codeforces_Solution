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

    	vector<int>ans(n,0);

    	for(int i=0;i<n;i++)
    	{
    		if(A[i])
    		{
    			int a = i-A[i]+1;
    			if(a<0)
    				a = 0;
    			int b = i+1;

    			ans[a]++;
    			if(b<n)
    				ans[b]--;
    		}
    	}

    	for(int i=1;i<n;i++)
    		ans[i]+=ans[i-1];
    	for(int i=0;i<n;i++)
    	{
    		if(ans[i])
    			cout<<1<<" ";
    		else
    			cout<<0<<" ";
    	}
    	cout<<"\n";
    }
    return 0;
}

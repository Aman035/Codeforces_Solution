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

    	sort(A.begin() , A.end());
    	if(n==1)
    	{
    		cout<<"1\n";
    		continue;
    	}
    	if(A[1]>0)
    	{
    		if(A[0]>0)
    		cout<<"1\n";
    		else
    		cout<<"2\n";
    		continue;
    	}
    	int ans = 1;
    	int mn = INT_MAX;
    	for(int i=1;i<n;i++)
    	{
    		if(A[i]<=0)
    		{
    			ans++;
    			mn = min(mn ,A[i]-A[i-1]);
    		}
    		else
    		{
    			if(A[i]<=mn)
    				ans++;
    			break;
    		}
    	}
    	cout<<ans<<"\n";

    }
    return 0;
}

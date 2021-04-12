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
    	ll ans = 0;
    	for(int i=0;i<n;i++)
    	{
    		if(A[i] == 1 || A[i] == 3)
    		{
    			ans++;
    		}
    		if(A[i] == 2)
    			continue;
    	}	
    	cout<<ans<<"\n";
    }
    return 0;
}

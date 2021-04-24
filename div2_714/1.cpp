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
    	int n,k;
    	cin>>n>>k;
    	int mx = (n-1)/2;
    	if(k>mx)
    	{
    		cout<<-1<<"\n";
    		continue;
    	}

    	vector<int>ans(n , 0);
    	int st = n;
    	for(int i=1;i<n;i+=2)
    	{
    		if(k == 0)
    			break;
    		ans[i] = st;
    		k--;
    		st--;
    	}
    	st = 1;
    	for(int i=0;i<n;i++)
    	{
    		if(ans[i] == 0)
    		{
    			ans[i] = st;
    			st++;
    		}
    	}

    	for(int i=0;i<n;i++)
    		cout<<ans[i]<<" ";
    	cout<<"\n";



    }
    return 0;
}

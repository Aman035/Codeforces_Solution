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
    	int dig = 0;
    	int ori = n;
    	while(ori)
    	{
    		dig++;
    		ori/=10;
    	}	

    	ll ans = 9*(dig-1);

    	for(int i=1;i<=9;i++)
    	{
    		ll num = 0;
    		for(int j=0;j<dig;j++)
    		{
    			num = num*10+i;
    		}
    		if(num <= n)
    			ans++;
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}

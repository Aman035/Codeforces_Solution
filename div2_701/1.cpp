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
    	int a,b;
    	cin>>a>>b;
    	int res = INT_MAX;
    	int tmp=0;
    	if(a<b)
    	{
    		cout<<"1\n";
    		continue;
    	}
    	if(a == b)
    	{
    		cout<<"2\n";
    		continue;
    	}

    	while(1)
    	{

    		if(b==1)
    		{
    			tmp++;
    		}
    		else
    		{
    			int ans = 0;
    			int tp = a;
    			while(tp)
    			{
    				tp/=b;
    				ans++;
    			}
    			res = min(res,ans+tmp);
    			tmp++;
    		}
    		b++;
    		if(tmp>res)
    			break;
    	}
    	cout<<res<<"\n";
    }
    return 0;
}

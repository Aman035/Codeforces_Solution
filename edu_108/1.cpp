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
    	int r,b,d;
    	cin>>r>>b>>d;
    	bool f = 0;

    	if(d == 0)
    	{
    		if(r  == b)
    			cout<<"YES\n";
    		else
    			cout<<"NO\n";
    		continue;
    	}

    	if(abs(r-b)<=d)
    	{
    		cout<<"YES\n";
    		continue;
    	}

    	if(r > b)
    	{
    		int x = (r-b)/d;

    		if((r-b)%d == 0)
    			x--;

    		if(x>=b)
    			cout<<"NO\n";
    		else
    			cout<<"YES\n";
    	}
    	else
    	{
    		int x = (b-r)/d;

    		if((b-r)%d == 0)
    			x--;

    		if(x>=r)
    			cout<<"NO\n";
    		else
    			cout<<"YES\n";
    	}

    }
    return 0;
}

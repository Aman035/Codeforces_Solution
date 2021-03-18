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
    	string s;
    	cin>>s;
    	if(s.size()<4)
    	{
    		cout<<"YES\n";
    		continue;
    	}
    	else
    	{
    		bool f =0;
    		bool ans = 1;
    		for(int i=0;i<s.size()-1;i++)
    		{
    			if(s[i] == '1' && s[i+1] == '1')
    				f=1;

    			if(f && s[i]=='0' && s[i+1] =='0')
    			{
    				ans = 0;
    				break;
    			}

    		}
    		if(ans)
    			cout<<"YES\n";
    		else
    			cout<<"NO\n";2
    		
    	}
    }
    return 0;
}

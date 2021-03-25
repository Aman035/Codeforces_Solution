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
    	string s;
    	cin>>s;

    	int f,l;
    	f = l = -1;
    	ll ans = 0;
    	for(int i=0;i<n;i++)
    	{
    		if(s[i] == '*')
    		{
    			s[i] = 'x';
    			f = i;
    			ans++;
    			break;
    		}
    	}
    	for(int i=n-1;i>f;i--)
    	{
    		if(s[i] == '*')
    		{
    			s[i] = 'x';
    			l = i;
    			ans++;
    			break;
    		}
    	}

    	while(f+k< l)
    	{
    		int index = f+k;
    		while(s[index] == '.' && index>=0)
    			index--;
    		if(index<0)
    			break;
    		s[index] ='x';
    		ans++;
    		f = index;
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}

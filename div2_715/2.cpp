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
    	string s;
    	cin>>s;
    	bool  ans = 1;
    	int ct1,ct2;
    	ct1 =ct2 = 0;

    	for(int i=0;i<n;i++)
    	{
    		if(s[i] == 'T')
    			ct1++;
    		else
    			ct2++;
    		if(ct2 > ct1)
    			ans = 0;
    	}
    	if(ct2!= n/3)
    	ans = 0;	
    	ct1 = ct2 = 0;
    	

    	for(int i=n-1;i>=0;i--)
    	{
    		if(s[i] == 'T')
    			ct1++;
    		else
    			ct2++;
    		if(ct2 > ct1)
    			ans = 0;
    	}
    	if(ans)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
    return 0;
}

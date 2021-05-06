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
    	bool f= 0;
    	int al[26] = {0};
    	string s;
    	cin>>s;
    	for(int i=0;i<n;i++)
    	{

    		if(al[s[i]-'A']>0 && i>0 && s[i] != s[i-1])
    		{
    			f=1;
    		}
    		al[s[i]-'A']++;
    	}
    	if(f)
    		cout<<"NO\n";
    	else
    		cout<<"YES\n";
    }
    return 0;
}

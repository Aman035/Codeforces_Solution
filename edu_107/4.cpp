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
    t =1;

    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	if(n==1)
    	{
    		cout<<"a\n";
    		continue;
    	}
    	string s = "";
    	for(char c = 'a';c<k+'a';c++)
    		s+=c;

    	int gap = 1;
    	vector<string>all;
    	all.clear();
    	while(gap < n)
    	{
    		string tmp ="";
    		for(int i=0;i<s.size();i++)
    		{
    			tmp+=s[i];
    			tmp+=s[(i+gap)%s.size()];
    			// cout<<s[i]<<" "<<s[(i+gap)%s.size()]<<" "<<tmp<<"\n";
    		}
    		all.pb(tmp);
    		// cout<<tmp<<"\n";
    		gap++;
    	}

    	string ans = "";
    	int st = 0;
    	while(ans.size() <= n)
    	{
    		ans+=all[st%all.size()];
    		st++;
    	}

    	ans = ans.substr(0,n);
    	cout<<ans<<"\n";

    	

    }
    return 0;
}

#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
string ans;
ll mx;
map<char , int>pre;
map<int , char>ind;
map<char , bool>exist;

//Another way
//Basically it will take inversion count of ans to turn it back in original array
//we have to maximize the inverion count
ll check(string s , string A)
{
	int i = 0;
    ll ans = 0;
    vector<char> v;
  	for (char c : s)//length 4
  	{
	    v.clear();
	    for (int j = i; j < A.size(); j++) 
	    {
		      if (A[j] == c) 
		      {
		        A[i] = c;
		        ans += j - i;
		        i++;
		      } 
		      else v.push_back(A[j]);
	    }

	    for (int j = i; j < A.size(); j++) 
	      A[j] = v[j - i];
  	}
  	return ans;
}

void gen_all_per(string s , vector<string>&permu)
{
	bool f = 0;
	for(int i=0;i<4;i++)
	{
		if(exist[ind[i]]!=0)
		{
			f=1;
			exist[ind[i]] = 0;
			gen_all_per(s+ind[i] , permu);
			exist[ind[i]] = 1;
		}
	}
	if(!f)
		permu.pb(s);
}

int main()
{
    fast
    int t;
    cin>>t;
    ind[0] = 'A' , ind[1] = 'T', ind[2] = 'O' , ind[3] = 'N';
    exist['A'] = exist['T'] = exist['O'] = exist['N'] = 1;
    vector<string>permu;
    gen_all_per("" ,permu);//generate permulation of ATON (ie 24 strings)
    while(t--)
    {
    	pre.clear();
    	mx = INT_MIN;
    	string a;
    	cin>>a;
    	for(int i=0;i<a.size();i++)
    		pre[a[i]]++;

    	for(int i=0;i<permu.size();i++)
    	{
    		ll temp = check(permu[i],a);
    		if(mx<temp)
    		{
    			mx = temp;
    			ans = "";
    			for(int j=0;j<permu[i].size();j++)
    			{
    				string x(pre[permu[i][j]] , permu[i][j]);
    				ans+=x;
    			}
    		}
    	}

    	cout<<ans<<"\n";
    }
    return 0;
}

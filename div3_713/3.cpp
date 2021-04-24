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
    	cin>>b>>a;
    	string s;
    	cin>>s;
    	bool f =0;
    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i] == '1')
    		{
    			a--;
    			if(a<0)
    			{
    				f=1;
    				break;
    			}
    		}
    		else
    		{
    			if(s[i] == '0')
    			{
    				b--;
    				if(b<0)
    				{
    					f=1;
    					break;
    				}
    			}

    		}
    	}


    	
    	for(int i=0;i<s.size();i++)
    	{
    		if(i == s.size()-i-1)
    			continue;

    		if(s[i]!='?' && s[s.size()-i-1] == '?')
    		{
    			if(s[i] == '1')
    			{
    				if(a<=0)
    				{
    					f=1;
    					break;
    				}
    				s[s.size()-i-1] = '1';
    				a--;
    			}
    			else
    			{
    				if(b<=0)
    				{
    					f=1;
    					break;
    				}
    				s[s.size()-i-1] = '0';
    				b--;
    			}
    		}
    	}

    	if(s.size()%2 && s[s.size()/2] == '?')
    	{
    		if(a%2 && a>0)
    		{
    			s[s.size()/2] = '1';
    			a--;
    		}	
    		else
    		{
    			if(b%2 && b>0)
    			{
    				s[s.size()/2] = '0';
    				b--;
    			}
    			else
    				f=1;
    			
    		}
    	}

    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i] == '?')
    		{
    			if(a)
    			{
    				if(a<2)
    				{
    					f=1;
    					break;
    				}
    				s[i] = s[s.size()-1-i] = '1';
    				a-=2;
    			}
    			else
    			{
    				if(b<2)
    				{
    					f=1;
    					break;
    				}
    				s[i] = s[s.size()-1-i] = '0';
    				b-=2;
    			}
    		}
    	}

    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i] != s[s.size()-i-1])
    		{
    			f=1;
    			break;
    		}
    	}

    	if(!f)
    	cout<<s<<"\n";
    	else
    		cout<<"-1\n";

    }
    return 0;
}

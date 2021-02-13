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
    	// vector<bool>A(26,0);
    	// for(int i=0;i<s.size();i++)
    	// {
    	// 	A[s[i]-'a']=1;
    	// }
    	// char alice,bob;
    	// alice = bob = '!';
    	// for(int i=0;i<26;i++)
    	// {
    	// 	if(!A[i])
    	// 	{
    	// 		alice = i+'a';
    	// 		break;
    	// 	}
    	// }
    	// for(int i=25;i>=0;i--)
    	// {
    	// 	if(!A[i])
    	// 	{
    	// 		bob = i+'a';
    	// 		break;
    	// 	}
    	// }
    	for(int i=0;i<s.size();i++)
    	{
    		if(i%2==0)
    		{
    			if(s[i]=='a')
    				cout<<'b';
    			else
    				cout<<'a';
    		}
    		else
    		{
    			if(s[i]=='z')
    				cout<<'y';
    			else
    				cout<<'z';
    		}
    	}
    	cout<<"\n";
    }
    return 0;
}

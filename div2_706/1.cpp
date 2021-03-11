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
   		int i = 0;
   		int j = n-1;
   		bool f=0;
   		while(i<j && k)
   		{
   			if(s[i] == s[j])
   				k--;
   			else
   			{
   				f=1;
   				break;
   			}
   			i++;
   			j--;

   			if(k==0)
   			{
   				if(i>j)
   					f=1;
   				break;
   			}
   		}
   		if(f)
   			cout<<"NO\n";
   		else
   			cout<<"YES\n";
   	}
    return 0;
}

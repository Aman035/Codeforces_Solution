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
    	ll a;
    	cin>>a;
    	//no. is of form 11x + 111y
    	//Chicken McNugget Theorem
    	//every no. greater than 11*111 - 11 - 111 can be depicted in this form
    	//ie a>1099 always yes
    	//fr a<=1099 bruteforce
    	bool f = 1;
    	if(a <= 1099)
    	{
    		f= 0;
    		while(1)
    		{
    			if(a%11 == 0)
    				f=1;
    			a-=111;
    			if(a<0 || f)
    				break;
    		}
    	}
    	if(f)
    		cout<<"YES\n";
    	else
    	cout<<"NO\n";
    }
    return 0;
}

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
    	int a,b,c;
    	cin>>a>>b>>c;
    	string x,y;
    	x = y = "1";
    	int A,B;
    	A =a;
    	B=b;
    	a--;
    	b--;
    	while(a--)
    	{
    		x+='0';
    	}
    	while(b--)
    		y+='0';

    	a =A;
    	b=B;

    	if(c != min(a,b))
    	{
    		if(x.size() < y.size())
    		{
    			x[x.size()-c] = '1';
    		}
    		else
    		{
    			y[y.size()-c] = '1';
    		}
    	}

    	cout<<x<<" "<<y<<"\n";


    }
    return 0;
}

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
    	vector<ll>A(n);

    	vector<ll>left(n,0);
    	vector<ll>right(n,0);
    	ll x  = 0;
    	for(int i=0;i<n;i++)
    	{
    		cin>>A[i];
    		x = x^A[i];
    	}

    	left[0]  =A[0];
    	for(int i=1;i<n;i++)
    	{
    		left[i] = A[i]^left[i-1];
    	}

    	right[n-1]  = A[n-1];

    	for(int i=n-2;i>=0;i--)
    		right[i] = A[i]^right[i+1];

    	bool f = 0;
    	if(A[0] == right[1] || A[n-1] == left[n-2])
    		f=1;

    	if(x == 0)
    	{
    		for(int i=1;i<=n-1;i++)
			{
				ll a  = left[i-1];
				ll b = right[i];

				// cout<<left[i]<<" "<<right[i]<<"\n";
				if(a == b)
				{
					f=1;
					break;
				}
			}
    	}
    	else
    	{
    		ll v =0;
    		int z = 0;
    		for(int i=0;i<n;i++)
    		{
    			v = v^A[i];
    			if(v == x)
    			{
    				v = 0;
    				z++;
    			}
    		}
    		if(v == 0 && z>2)
    		f= 1;
    	}

    	


    	// for(int i=1;i<=n-1;i++)
    	// {
    	// 	ll a  = left[i-1];
    	// 	ll b = right[i];

    	// 	// cout<<left[i]<<" "<<right[i]<<"\n";
    	// 	if(a == b)
    	// 	{
    	// 		f=1;
    	// 		break;
    	// 	}
    	// }

    	// for(int i=1;i<n-1;i++)
    	// {
    	// 	if(left[i] == right[i])
    	// 	{
    	// 		f=1;
    	// 		break;
    	// 	}
    	// }

   		if(f)
   			cout<<"YES\n";
   		else
   			cout<<"NO\n";



    }
    return 0;
}

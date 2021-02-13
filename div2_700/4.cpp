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
    int n;
    cin>>n;
    int b,w;
    b=w=0;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    	cin>>A[i];
    int ans=0;
    for(int i=0;i<n;i++)
    {
    	if(A[i] != b || A[i] !=w)//this is obvios
    	{
    		ans++;
    		if(A[i] == b)//case 1
    			w=A[i];
    		else
    		{
    			if(A[i] == w)//case 2
    				b = A[i];

    			else
    			{
    				if(i<n && A[i+1] == w)
    					w = A[i];
    				else
    					b = A[i];

    			}
    		}
    	}
    }
    cout<<ans<<"\n";
    return 0;
}

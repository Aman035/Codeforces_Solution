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
    	vector<int>A,B;
    	for(int i=0;i<n;i++)
    	{
    		int x;
    		cin>>x;
    		if(x%2)
    			A.pb(x);
    		else
    			B.pb(x);
    	}	

    	for(int i=0;i<A.size();i++)
    		cout<<A[i]<<" ";

    	    	for(int i=0;i<B.size();i++)
    		cout<<B[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}

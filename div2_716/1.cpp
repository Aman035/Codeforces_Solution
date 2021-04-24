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
    	vector<int>A(n);
    	for(int i=0;i<n;i++)
    		cin>>A[i];

    	bool f = 0;
    	for(int i=0;i<n;i++)
    	{
    		int x = sqrt(A[i]);
    		if(x*x != A[i])
    		{
    			f=1;
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

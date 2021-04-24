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
    	vector<int>A(n);
    	for(int i=0;i<n;i++)
    		cin>>A[i];
    	int i = 0;
    	while(k)
    	{
    		int x = min(k,A[i]);
    		k-=x;
    		A[i]-=x;
    		A[n-1]+=x;
    		i++;
    		if(i == n-1)
    			break;
    	}

    	for(int i=0;i<n;i++)
    		cout<<A[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}

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
    	int n,x;
    	cin>>n>>x;
    	vector<int>A(n);
    	for(int i=0;i<n;i++)
    		cin>>A[i];

    	ll sum = 0;
    	sort(A.begin() , A.end());
    	int index =-1;
    	for(int i=0;i<n;i++)
    	{
    		sum+=A[i];

    		if(sum == x)
    		{
    			index = i;
    			break;
    		}
    	}
    	bool f= 0;
    	if(index == -1)
    	{
    		f=1;
    	}
    	else
    	{
    		if(index!=n-1 && A[index] !=A[n-1])
    		{
    			f=1;
    			swap(A[index] , A[n-1]);
    		}
    	}
    	if(f)
    	{
    		cout<<"YES\n";
    		for(int i=0;i<n;i++)
    			cout<<A[i]<<" ";
    	}
    	else
    		cout<<"NO";
    	cout<<"\n";
    }
    return 0;
}

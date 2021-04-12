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
    t = 1;
    while(t--)
    {
    	int n,q;
    	cin>>n>>q;
    	vector<int>A(51 , 0);

    	for(int i=1;i<=n;i++)
    	{
    		int x;
    		cin>>x;
    		if(A[x] == 0)
    			A[x] = i;
    	}

    	for(int i=0;i<q;i++)
    	{
    		int x;
    		cin>>x;
    		cout<<A[x]<<" ";
    		int index = A[x];

    		for(int i=1;i<=50;i++)
    		{
    			if(A[i]<index)
    				A[i]++;
    		}
    		A[x] = 1;
    	}
    	cout<<"\n";
    }
    return 0;
}

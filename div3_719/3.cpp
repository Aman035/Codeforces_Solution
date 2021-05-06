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
    	if(n == 2)
    	{
    		cout<<"-1\n";
    		continue;
    	}
    	if(n == 3)
    	{
    		cout<<"2 9 7\n4 6 3\n1 8 5\n";
    		continue;
    	}
    	vector<vector<int>>A(n , vector<int>(n , 0));
    	int start =1;
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j+=2)
    		{
    			A[i][j] = start;
    			start++;
    		}
    	}

    	for(int i=0;i<n;i++)
    	{
    		for(int j=1;j<n;j+=2)
    		{
    			A[i][j] = start;
    			start++;
    		}
    	}

    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    			cout<<A[i][j]<<" ";
    		cout<<"\n";
    	}


    }
    return 0;
}

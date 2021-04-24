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
    	vector<vector<char>>A(n,vector<char>(n ,'!'));

    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    			cin>>A[i][j];
    	}

    	int x1,y1,x2,y2;
    	bool f =0;

    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			if(A[i][j] == '*' )
    			{
    				if(!f)
    				{
    					x1= i;
    					y1 = j;
    					f=1;
    				}
    				else
    				{
    					x2 = i;
    					y2 = j;
    				}
    			}
    		}
    	}


    	if(x1 == x2 || y1 == y2)
    	{
    		if(x1 == x2)
    		{
    			if(x1 == 0)
    			A[n-1][y1] = A[n-1][y2]  ='*';
    			else
    			A[0][y1] = A[0][y2] = '*';
    		}
    		else
    		{
    			if(y1 == 0)
    			A[x1][n-1] = A[x2][n-1]  ='*';
    			else
    			A[x1][0] = A[x2][0] = '*';
    		}
    	}
    	else
    	{
    		A[x1][y2] = '*';
    		A[x2][y1]  ='*';
    	}

    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    			cout<<A[i][j]<<"";
    		cout<<"\n";
    	}
    }
    return 0;
}

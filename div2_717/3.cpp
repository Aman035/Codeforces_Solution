#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
int getans(vector<int>A)
{
	int bit = 32 ;
	int index;
	for(int i=0;i<A.size();i++)
	{
		int x = 0;
		while(1)
		{
			if(A[i]&1)
			{
				if(x<bit)
				{
					bit = x;
					index = i+1;
				}
				break;
			}
			A[i] = A[i]>>1;
			x++;
		}
	}
	return index;
}
int equalPartition(int N,  vector<int>arr)
{
    int sum = 0;
    for(int i=0;i<N;i++)
    sum+=arr[i];
    
    if(sum%2)
    return 0;
    sum = sum/2;
   
    bool dp[2][sum+1];
    for(int i=1;i<=sum;i++)
    dp[0][i] = 0;
    
    dp[0][0] = dp[1][0] = 1;
    
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1] <= j)
            dp[1][j] = dp[0][j] || dp[0][j-arr[i-1]];
            else
            dp[1][j] = dp[0][j];
        }
        
        for(int k=0;k<=sum;k++)
        dp[0][k] = dp[1][k];
    }
    return dp[1][sum];
}


int main()
{
    fast
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    	cin>>A[i];

    int ans = 0;
    bool f = 0;
    for(int i=0;i<n;i++)
	{
		if(A[i]%2)
		{
			ans = i+1;
			f = 1;
			break;
		}
	}

	if(equalPartition(n ,A))
	{
		cout<<"1\n";
		if(!f)
			ans = getans(A);//get index which becomes odd first
		cout<<ans<<"\n";
	}
	else
		cout<<"0\n";
    return 0;
}

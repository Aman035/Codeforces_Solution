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
    	int n,m;
    	cin>>n>>m;
    	vector<vector<int>>A(n,vector<int>(m,0));
    	vector<vector<int>>ans(n,vector<int>(m,0));
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    		{
    			cin>>A[i][j];
    		}
    	}

    	vector<pp>val;

    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    			val.pb({A[i][j] , i});
    	}

    	sort(val.begin() , val.end());

    	for(int i=0;i<m;i++)
    	{
    		ans[val[i].second][i] = val[i].first;
    	}

    	// for(int i=0;i<n;i++)
    	// {
    	// 	for(int j=0;j<m;j++)
    	// 		cout<<ans[i][j]<<" ";
    	// 	cout<<"\n";
    	// }

    	for(int i=0;i<n;i++)
    	{
    		map<int,int>x;
    		x.clear();

    		for(int j=0;j<m;j++)
    		{
    			if(ans[i][j]!=0)
    				x[ans[i][j]]--;
    		}

    		for(int j=0;j<m;j++)
    		{
    			x[A[i][j]]++;
    		}
    		int j = 0;
    		for(auto it : x)
    		{
    			if(it.second == 0)
    				continue;

    			int l = it.second;
    			while(l--)
    			{
    				while(ans[i][j] != 0)
    				j++;
    				ans[i][j] = it.first;
    			}

    		}


    		// for(int j=0;j<m;j++)
    		// {
    		// 	if(ans[i][j] != 0)
    		// 	{
    		// 		val = ans[i][j];
    		// 		break;
    		// 	}
    		// }

    		// int k  =0;
    		// int l = 0;

    		// while(k<m&&l<m)
    		// {
    		// 	if(ans[i][k] != 0)
    		// 	{
    		// 		k++;
    		// 		continue;
    		// 	}
    		// 	else
    		// 	{
    		// 		if(A[i][l] == val && !f)
    		// 		{
    		// 			f=1;
    		// 			l++;
    		// 		}
    		// 		ans[i][k] = A[i][l];
    		// 		k++;
    		// 		l++;
    		// 	}
    		// }	
    	}

    // 	for(int i=0;i<n;i++)
    // 	{
    // 		int mn = INT_MAX;
    // 		int index;
    // 		for(int j=0;j<m;j++)
    // 		{
    // 			if(mn > A[i][j])
    // 			{
    // 				mn = A[i][j];
    // 				index = j;
    // 			}
    // 		}
    // 		val.pb({index , i});
    // 	}

    // 	sort(val.begin() , val.end());

    // 	for(int i=0;i<m;i++)
    // 	{

    // 	}

    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    			cout<<ans[i][j]<<" ";
    		cout<<"\n";
    	}
    }
    return 0;
}

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
	vector<vector<int>>A(n+1 , (vector<int>(n+1 , 0)));
	for(int i=0;i<n;i++)
		cin>>A[i][i];

	bool ans = 1;

	for(int i=0;i<n;i++)
	{
		int x = i;
		int y = i;
		int z = A[i][i];
		A[i][i] = 0;
		int times = z;

		while(times>0)
		{
			if(A[x][y] == 0)
			{
				A[x][y] = z;
				times--;
			}
			else
			{
				y--;
				if(y<0 || A[x][y])
				{
					y++;
					x++;
				}
			}
			if(x >=n)
				ans = 0;
		}
	}

	if(ans)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i>=j)
					cout<<A[i][j]<<" ";
			}
			cout<<"\n";
		}
	}	
	else
		cout<<"-1\n";
    return 0;
}

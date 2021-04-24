#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
vector<vector<ll>>dp(2000 , vector<ll>(2000 , -1));
vector<ll>A;
ll solve(int l , int r)
{
	if(l>r)
		return -1;
	if(l == r)
		return 0;

	if(dp[l][r] != -1)
		return dp[l][r];

	dp[l][r] =  A[r]-A[l] + min(solve(l+1 , r) , solve(l , r-1));
	return dp[l][r];

}
int main()
{
    fast
   	int n;
   	cin>>n;
   	A.clear();
   	A.resize(n);
   	for(int i=0;i<n;i++)
   		cin>>A[i];
   	sort(A.begin(),A.end());
   	cout<<solve(0,n-1)<<"\n";
    return 0;
}

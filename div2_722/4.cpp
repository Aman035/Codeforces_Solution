#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 998244353
using namespace std;
int main()
{
    fast
	int n;
	cin>>n;
	vector<int>fac(n+1 , 0);
	//calculating total divisors of each i (1..n) in time O(nlogn)  [harmonic series]
	for(int i=1;i<=n;i++)
		for(int j=2*i;j<=n;j+=i)
			fac[j]++;

	ll ans;
	ll sum = 1;
	for(int i=1;i<=n;i++)
	{
		ans = (sum+fac[i])%M;
		sum = (ans + sum)%M;
	}
	cout<<ans<<"\n";
    return 0;
}

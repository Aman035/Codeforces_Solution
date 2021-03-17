#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
map<ll,pp> pairs;
int a,b,c,d;
void solve(vector<int>A , int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			ll sum = A[i]+A[j];
			if(pairs.find(sum)!=pairs.end())
			{
				pp x = pairs[sum];
				if( x.first == i || x.first == j || x.second == i || x.second == j )
					continue;
				a = i,b = j , c = x.first , d = x.second;
				return;
			}
			else
				pairs[sum] = mp(i,j);
		}
	}
}
int main()
{
    fast
	int n;
	cin>>n;
	vector<int>A(n);
	a=b=c=d =-1;
	for(int i=0;i<n;i++)
		cin>>A[i];
	solve(A,n);
	if(a==-1)
		cout<<"NO\n";
	else
	{
		a++,b++,c++,d++;
		cout<<"YES\n";
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
	}
    return 0;
}

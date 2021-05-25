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
    	vector<int>A(n);
    	int mn = INT_MAX;
    	map<int,int>pre;
    	for(int i=0;i<n;i++)
    	{

    		cin>>A[i];
    		pre[A[i]]++;
    		mn = min(mn , A[i]);
    	}
    	cout<<n-pre[mn]<<"\n";
    }
    return 0;
}

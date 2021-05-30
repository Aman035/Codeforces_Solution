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
    	n*=2;

    	vector<int>A(n);

    	for(int i=0;i<n;i++)
    		cin>>A[i];


    	sort(A.begin() , A.end());
    	vector<int>ans(n);

    	int i = 0;
    	int j = n/2;

    	for(int k=0;k<n;k+=2)
    	{
    		ans[k] = A[i++];
    		ans[k+1] = A[j++];
    	}

    	for(int i=0;i<n;i++)
    		cout<<ans[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}

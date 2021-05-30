#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,ll>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
int main()
{
    fast
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    	cin>>A[i];
    priority_queue<int , vector<int> , greater<int>>pq;
    int ans = 0;
    ll curr = 0;
    for(int i=0;i<n;i++)
    {
    	curr+=(ll)A[i];
    	pq.push(A[i]);
    	ans++;
    	if(curr <0)//i made a bad decision
    	{
    		curr-=(ll)pq.top();
    		pq.pop();
    		ans--;
    	}
    }
    cout<<ans<<"\n";
    return 0;
}

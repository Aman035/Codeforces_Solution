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
    	int n,w;
    	cin>>n>>w;
    	multiset<int>S;
    	for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            S.insert(x);
        }
    	int ans = 1;
    	ll curr = w;

        while(!S.empty())
        {
            auto it = S.upper_bound(curr);

            if(it == S.begin())
            {
                curr = w;
                ans++;
            }
            else
            {
                it--;
                curr -= *it;
                S.erase(it);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

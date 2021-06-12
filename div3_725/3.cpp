#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(int i=a;i<n;i++)
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
        ll l,r;
        cin>>n>>l>>r;
        vector<int>A(n);
        for(int i=0;i<n;i++)
            cin>>A[i];
        ll ans = 0;
        sort(A.begin(),A.end());
        for(int i=0;i<n;i++)
        {
            if(A[i] >r)
                continue;
            int up = r-A[i];
            int down = abs(A[i] - l);

            auto upper1 = std::upper_bound(A.begin(), A.end(), up);
            upper1--;
            auto upper2 = std::upper_bound(A.begin(), A.end(), down-1);
            if(A[i]>=l)
            {
                ll x =upper1+1-A.begin();
                ans+=x;
                if(i>=(upper2-A.begin()) && i<=(upper1-A.begin()))
                ans--;
            }
            else
            {
                ll x =upper1 - upper2+1;

                if(x > 0){

                    ans+=(ll)x;
                    if(i>=(upper2-A.begin()) && i<=(upper1-A.begin()))
                    ans--;
                }
            }
        }
        cout<<ans/2<<"\n";

    }
    return 0;
}

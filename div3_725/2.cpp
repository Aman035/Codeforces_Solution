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
        cin>>n;
        vector<int>A(n);
        ll sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            sum+=(ll)A[i];
        }

        if(sum%n == 0)
        {
            int x = sum/n;
            int ans = 0;
            for(int i=0;i<n;i++)
            {
                if(A[i] > x)
                    ans++;
            }
            cout<<ans<<"\n";
        }
        else
            cout<<"-1\n";

    }
    return 0;
}

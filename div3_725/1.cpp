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
        int mn,mx;
        mn = INT_MAX;
        mx = INT_MIN;
        vector<int>A(n);
        int pos1,pos2;

        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i] > mx)
            {
                mx = A[i];
                pos1 = i;
            }
            if(A[i] < mn)
            {
                mn = A[i];
                pos2 = i;
            }
        }
        ll ans;
        // cout<<pos1<<" "<<pos2<<"\n";
        if(pos1 > pos2)
        {
            ans = min(pos1+1 , pos2+1+n-pos1);
            ans = min(ans ,(ll) n-pos2);
        }
        else
        {

            ans = min(pos2+1 , pos1+1 + n-pos2);
            ans = min(ans ,(ll) n-pos1);
        }
        // ans = min(ans , 2*n-pos1-pos2);

        cout<<ans<<"\n";
    }
    return 0;
}

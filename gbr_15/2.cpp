#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(int i=a;i<b;i++)
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
        vector<vector<int>>A(n , vector<int>(5,0));

        REP(i,0,n)
        {
            REP(j,0,5)
            cin>>A[i][j];
        }
        
        int k = 0;
        REP(i,1,n)
        {
            int x = 0,y =0;

            REP(j,0,5)
            {
                if(A[k][j] > A[i][j])
                    y++;
                else
                {
                    if(A[k][j] < A[i][j])
                        x++;
                }
            }

            if(y>=3)
                k = i;
            else
            {
                if(x<3)
                {
                    k = i+1;
                    i++;
                }
            }
        }
        int ans = k+1;
        if(k>=n)
        ans = -1;
        else
        {
            REP(i,0,n)
            {
                int x = 0;
                if(k == i)
                    continue;
                REP(j,0,5)
                {
                    if(A[k][j] < A[i][j])
                        x++;
                }
                if(x<3)
                {
                    ans = -1;
                    break;
                }
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define M 1000000007
using namespace std;

bool intersect(pp a , pp b)
{
    if(a.first > a.second)
        swap(a.first ,a.second);
    if(b.first > b.second)
        swap(b.first ,b.second);
    if(a.first > b.first)
    swap(a,b);

    if(a.second > b.first && a.second < b.second)
        return 1;
    return 0;
       
}
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pp>chord;
        vector<bool>points(2*n+1 , 0);
        REP(i,0,k)
        {
            int x,y;
            cin>>x>>y;
            chord.pb({x,y});
            points[x] = points[y] = 1;
        }
        vector<int>p;
        REP(i,1,2*n+1)
        {
            if(points[i] == 0)
                p.pb(i);
        }
        REP(i,0,n-k)
            chord.pb({p[i] , p[i+n-k]});

        int ans = 0;

        REP(i,0,chord.size())
        {
            REP(j,i+1,chord.size())
            {
                if(intersect(chord[i] , chord[j]))
                    ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

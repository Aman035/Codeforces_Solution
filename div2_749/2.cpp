#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define M 1000000007
using namespace std;

void solvetc(){
    int n,m;
    cin>>n>>m;

    vector<pp>ans;
    vector<int>tmp;
    set<int>y;
    REP(i,0,m){
        int a,b,c;
        cin>>a>>b>>c;
        y.insert(b);
    }
    
    REP(i,1,n+1){
        if(y.find(i) == y.end())
            tmp.pb(i);
    }

    REP(i,0,tmp.size()-1)
        ans.pb({tmp[i] , tmp[i+1]});

    for(auto k : y)
        ans.pb({k , tmp[0]});

    REP(i,0,n-1)
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
}
int main(){
    fast
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
        solvetc();
    return 0;
}

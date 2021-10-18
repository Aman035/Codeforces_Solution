#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define M 1000000007
using namespace std;
void pa(bool f){
    f == 1 ? cout<<"YES\n" : cout<<"NO\n";
}
void solvetc(){
    int n,m;
    cin>>n>>m;
    vector<string>A(n);

    REP(i,0,n)
    cin>>A[i];

    vector<int>B(m+1,0);

    REP(i,0,n){
        REP(j,0,m)
        {
            bool a = 1,b =1;
            if(i-1 >=0)
                a = A[i-1][j] == 'X' ? 0 : 1;
            if(j-1 >=0)
                b = A[i][j-1] == 'X' ? 0 : 1;
            if(!a && !b)
                B[j+1]++;
        }
    }

    //prefix sum
    REP(i,1,m+1)
    B[i]+=B[i-1];

    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        pa(!(B[y]-B[x] > 0));
    }
}
int main(){
    fast
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t=1;
    while(t--)
    	solvetc();
    return 0;
}

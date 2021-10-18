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
    int n;
    cin>>n;
    vector<int>A(n , 0);
    vector<int>B(n , 1);
    B[n-1] = 2;

    int val = n;
    while(1){

        cout<<"? ";
        REP(i,0,n)
        cout<<B[i]<<" ";
        cout<<"\n";
        cout.flush();
        int x ; 
        cin>>x;
        if(x != 0)
            val--;
        else
            break;
        B[n-1]++;

        if(B[n-1] > n)
            break;
    }
    A[n-1] = val;

    REP(i,1,n+1){
        if(i == val)
            continue;

        cout<<"? ";
        REP(j,0,n-1)
            cout<<n-i+1<<" ";
        cout<<n-val+1<<"\n";
        cout.flush();
        int x ; 
        cin>>x;
        A[x-1] = i;
    }

    cout<<"! ";
    REP(i,0,n)
    cout<<A[i]<<" ";
    cout<<"\n";
    cout.flush();
}
int main(){
    fast
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    t = 1;
    // cin>>t;
    while(t--)
    	solvetc();
    return 0;
}

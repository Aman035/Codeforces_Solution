#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define M 1000000007
using namespace std;

bool isPrime(ll sum){
    for(int i=2;i*i<=sum;i++){
        if(sum%i == 0)
            return 0;
    }
    return 1;
}
void solvetc(){
    int n;
    cin>>n;
    vector<int>A(n);
    ll sum = 0;
    REP(i,0,n){
        cin>>A[i];
        sum+=A[i];
    }

    int x = -1;
    if(isPrime(sum)){
        cout<<n-1<<"\n";

        REP(i,0,n){
            if(!isPrime(sum-A[i]))
            {
                x = A[i];
                break;
            }
        }
    }
    else
        cout<<n<<"\n";

    REP(i,0,n){
        if(A[i] == x)
            continue;
        cout<<i+1<<" ";
       
    }
     cout<<"\n";
        
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

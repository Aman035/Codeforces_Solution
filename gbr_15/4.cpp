#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(a,b) for(int i=a;i<b;i++)
#define ll long long
#define M 1000000007
using namespace std;
set<ll>ans;
void all_subset_sum(vector<int>A,int sum,int st)
{
    ans.insert(sum);

    REP(st,A.size())
    {
        sum+=A[i];
        all_subset_sum(A ,sum ,i+1);
        sum-=A[i];
    }
}
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
        cin>>n;
        ans.clear();
        vector<int>A(n);
        bool f = 0;
        REP(0,n)
        {
            cin>>A[i];
            if(A[i] == 0)
                f = 1;
        }

        all_subset_sum(A,0,0);
        if(ans.size() == pow(2,n) && f == 0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}

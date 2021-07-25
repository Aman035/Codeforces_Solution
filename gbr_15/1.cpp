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
        string s;
        cin>>s;
        string res = s;
        sort(res.begin(),res.end());
        int k = 0;
        REP(i,0,n)
        {
            if(s[i] != res[i])
                k++;
        }
        cout<<k<<"\n";
    }
    return 0;
}

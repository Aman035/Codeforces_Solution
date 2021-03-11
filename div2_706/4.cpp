#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;

int main()
{
    fast
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++)
        cin>>A[i];

    vector<int>l(n) , r(n);

    l[0] = r[n-1] = 1;

    for(int i=1;i<n;i++)
    {
        if(A[i] > A[i-1])
            l[i] = l[i-1]+1;
        else
            l[i] = 1;
    }

    for(int i=n-2;i>=0;i--)
    {
        if(A[i] > A[i+1])
            r[i] = r[i+1]+1;
        else
            r[i] = 1;
    }

    int mx = 0;

    for(int i=0;i<n;i++)
    {
        mx = max(mx , l[i]);
        mx = max(mx , r[i]);
    }
    int ct = 0;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(l[i] == mx)
            ct++;
        if(r[i] == mx)
            ct++;
    }
    if(ct ==2)
    {
        for(int i=0;i<n;i++)
        {
            if(l[i] == mx && r[i] == mx && mx%2==1)
            {
                ans = 1;
                break;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}

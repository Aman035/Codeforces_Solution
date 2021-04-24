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
    vector<int>ans;
    for(int i=1;i<n;i++)
    {
      if(__gcd(i,n) == 1)
        ans.pb(i);
    }
    ll check = 1;
    for(int i=0;i<ans.size();i++)
    {
      check =(ll) check*ans[i];
      check%=n;
    }
 
    //check is 1 or n-1
    if(check!=1)
      ans.pop_back();
 
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++)
      cout<<ans[i]<<" ";
    cout<<"\n";
    return 0;
}
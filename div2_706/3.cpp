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
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<int>A , B;
    	int x,y;
    	for(int i=0;i<2*n;i++)
    	{
    		cin>>x>>y;
    		if(x==0)
    			A.pb(abs(y));
    		else
    			B.pb(abs(x));
    	}
    	sort(A.begin() , A.end());
    	sort(B.begin() , B.end());

    	double ans = 0.0;

    	for(int i=0;i<n;i++)
    	{
    		ll a  = (ll)A[i]*A[i];
    		ll b = (ll)B[i]*B[i];
    		ll tmp = (ll)a+b;
    		double res = sqrt((double)tmp);
    		ans+=res;
    	}
    	cout<<std::setprecision(20)<<ans<<"\n";
    }
    return 0;
}

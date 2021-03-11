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
    	int n,k;
    	cin>>n>>k;

    	ll ans = n;
    	vector<int>A(n);

    	for(int i=0;i<n;i++)
    		cin>>A[i];

    	if(k==0)
    	{
    		cout<<n<<"\n";
    		continue;
    	}

    	sort(A.begin(),A.end());

    	int mn  =0;
    	int mx = A[n-1];

    	for(int i=0;i<n;i++)
    	{
    		if(mn == A[i])
    			mn++;
    		else
    			break;
    	}

    	if(mn > mx)
    		ans+=k;
    	else
    	{
    		ll tp = mn+mx;
    		if(tp%2)
    			tp=tp/2+1;
    		else
    			tp/=2;
			bool f=0;
			for(int i=0;i<n;i++)
			{
				if(A[i] == tp)
				{
					f=1;
					break;
				}
			}
	    	if(!f)
	    		ans++;
    	}
    	
    	cout<<ans<<"\n";
    }
    return 0;
}

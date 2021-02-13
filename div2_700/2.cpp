#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
struct mons{
	int p,h;
};
bool cmp(mons a,mons b)
{
	return a.p < b.p;
}
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
    	ll a,h;
    	int n;
    	cin>>a>>h>>n;
    	vector<mons>A(n,{0,0});
    	vector<int>monp(n);
    	vector<int>monh(n);

    	for(int i=0;i<n;i++)
    		cin>>A[i].p;
    	for(int i=0;i<n;i++)
    		cin>>A[i].h;
    	sort(A.begin(),A.end(),cmp);

		for(int i=0;i<n;i++)
    		monp[i] = A[i].p ;
    	for(int i=0;i<n;i++)
    		monh[i] = A[i].h;

    	// for(int i=0;i<n;i++)
    	// 	cout<<A[i].p;
    	// for(int i=0;i<n;i++)
    	// 	cout<<A[i].h;


    	bool f=0;

    	for(int i=0;i<n;i++)
    	{
    		if(h<=0)
    		{
    			f=1;
    			break;
    		}
    		ll timesm=0;
    		ll timesh=0;

    		if(monh[i]%a)
    			timesm = monh[i]/a +1;
    		else
    			timesm = monh[i]/a;

    		if(h%monp[i])
    			timesh = h/monp[i] +1;
    		else
    			timesh = h/monp[i];

    		if(timesm == timesh)
    		{
    			h=0;
    		}
    		else
    		{
    			if(timesh < timesm)
    			{
    				f=1;
    				break;
    			}
    			else
    			{
    				h-=timesm*monp[i];
    			}
    		}
    	}
    	if(f)
    		cout<<"NO\n";
    	else
    		cout<<"YES\n";
    }
    return 0;
}

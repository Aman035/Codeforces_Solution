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
    int n;
    cin>>n;
    int l=1;
    int r=n;
    int k=100;
    while(k--)
    {
    	int i = (l+r)/2;

    	int curr,nxt,prev;
    	cout<<"? "<<i<<'\n';
    	cout.flush();
    	cin>>curr;

    	if(i==1)
    		prev = INT_MAX;
    	else
    	{
    		cout<<"? "<<i-1<<'\n';
    		cout.flush();
    		cin>>prev;
    	}

    	if(i==n)
    		nxt = INT_MAX;
    	else
    	{
    		cout<<"? "<<i+1<<'\n';
    		cout.flush();
    		cin>>nxt;
    	}

    	if(prev > curr && curr < nxt)
    	{
    		cout<<"! "<<i;
    		break;
    	}
    	else
    	{
    		if(curr > prev)
    			r=i-1;
    		else
    			l = i+1;
    	}
    }
    return 0;
}

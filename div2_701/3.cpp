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
    	int x,y;
    	cin>>x>>y;


    	//a = kb+k where k<b
    	// Therefore kb<k*k ie kb+k<k*k ie a<k*k ie x<k*k 
    	//Therefore k beongs to interval 1 to root(x)
    	
    	//for this range of k we need to find b such that
    	//1 ----> b>k
    	//2-----> 1<=b<=y
    	//3----->  1<= bk+k <=x ie b<x/k -1

    	// therefore no. of b is min(y,x/k-1)-k  //-k due to condition 1

    	ll res=0;
    	for(int i=1;i*i<x;i++)
    	{
    		ll tmp = min(y,x/i -1)-i;
    		if(tmp>0)
    			res+=tmp;
    	}
    	cout<<res<<'\n';
    }
    return 0;
}

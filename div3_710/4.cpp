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
    	map<int,int>fr;

    	vector<int>A(n);
    	set<int>s;
    	for(int i=0;i<n;i++)
    	{
    		cin>>A[i];
    		fr[A[i]]++;
    		s.insert(A[i]);
    	}

    	priority_queue<pp , vector<pp> >pq;

    	for(auto i : s)
    	{
    		pq.push({fr[i],i});
    	}

    	while(pq.size()>1)
    	{
    		pp x = pq.top();
    		pq.pop();
    		pp y = pq.top();
    		pq.pop();
    		x.first--;
    		y.first--;
    		if(x.first)
    			pq.push(x);
    		if(y.first)
    			pq.push(y);
    		// cout<<x.first<<" "<<x.second<<"\n";
    	}
    	if(!pq.empty())
    	cout<<pq.top().first<<"\n";
    	else
    		cout<<"0\n";




    }
    return 0;
}

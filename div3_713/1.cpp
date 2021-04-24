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
    	vector<int>A(n);
    	for(int i=0;i<n;i++)
    		cin>>A[i];
    	int num;
    	if(A[0] == A[1])
    	{
    		num  = A[0];
    	}
    	else
    	{
    		if(A[0] == A[2])
    			num = A[0];
    		else
    			num = A[1];
    	}

    	for(int i=0;i<n;i++)
    	{
    		if(A[i] != num)
    		{
    			cout<<i+1<<"\n";
    			break;
    		}
    	}

    }
    return 0;
}

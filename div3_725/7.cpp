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
    	ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll l = 0, r = 1e9 + 100;
        if (a == b) {
            cout << min(x, y) / a << "\n";
            continue;
        }

        if (a < b) 
            swap(a, b);//we assume a>b
/*
        equations are 
        x>=ak + (n-k)b ----->1
        
        on solving
        
        x-nb >= k(a-b)

        (x-nb)/(a-b) >= k ------>2


        another eq is
        y>=bk + (n-k)a -------->3

        on solving

        y-na >=k(b-a)     (here b-a is -ve so sign change while moving it to other side)

        (y-na)/(b-a) <= k  ------4

        Also k>=0 && k<=n ------> 5

        Using 2 4 and 5 solve 
*/

        while (l<r) 
        {
            ll m = (l+r+1) / 2;
            ll x1 = floorl((x - m * b) * 1.0l / (a - b));//max possible k
            ll x2 = ceill((y - m * a) * 1.0l/ (b - a));//min possible k
            
            //min can;t be less than 0 and max cant be greater than n (condition 5)
            if (max(x2, 0ll) <= min(x1, m))// possible values are btw a nd b
            l = m;
            else 
            r = m-1;
        }
        cout << l << "\n";
        
    }
    return 0;
}

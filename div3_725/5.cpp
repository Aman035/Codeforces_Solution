#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(int i=a;i<n;i++)
#define ll long long
#define M 1000000007
using namespace std;
ll cnt(string x)
{
    ll ans = 0;
    if(x.size() <4)
        return 0;

    for(int i=0;i<x.size()-3;i++)
    {
        if(x[i] == 'h' && x[i+1] == 'a' && x[i+2] == 'h' && x[i+3] == 'a')
            ans++;
    }
    return ans;
}
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
        cin>>n;
        map<string , pair<string,string>>v_to_s;

        map<string , ll>pre;
        ll last;
        while(n--)
        {
            string a;
            string b;
            cin>>a>>b;
            if(b == ":=")
            {
                string s1;
                cin>>s1;
                pre[a] = cnt(s1);
                if(s1.size() > 3)
                {
                    string prefix = s1.substr(0,3);
                    string suffix = s1.substr(s1.size()-3 ,3);
                    v_to_s[a] = {prefix , suffix};
                }
                else
                    v_to_s[a] = {s1, s1};

            }
            else
            {
                string x,y,z;
                cin>>x>>y>>z;

                pre[a] = pre[x] + pre[z] + cnt(v_to_s[x].second + v_to_s[z].first);


                string l = v_to_s[x].first + v_to_s[z].first; //handle cases when string itself is of length less than 3
                string r = v_to_s[x].second + v_to_s[z].second;
                l = l.substr(0 , 3);
                if(r.size() > 3)
                    r = r.substr(r.size()-3 , 3);

                v_to_s[a] = {l, r};
            }
            last =pre[a];
        }

        cout<<last<<"\n";
    }
    return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool odd(long long int n)
{
    if(n%2==0)
        return false;
    return true;    
}
bool pow2(long long int n)
{
 int r=0;
 double num=n;
 while(r==0&&num!=1.0)
 {
     r=num%2;
     n=num/2;
 }
 if(r==0&&num==1.0)
    return true;
 else
    return false;   
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        bool o=odd(n);
        if(n==1)
            cout<<"FastestFinger\n";

        else if (o)
        {
            cout<<"Ashishgup\n";
        }
         else if (n==2)
        {
            cout<<"Ashishgup\n";
        }
        else if(pow2(n))
        {
            cout<<"FastestFinger\n";
        }
        

        
        

    }
}
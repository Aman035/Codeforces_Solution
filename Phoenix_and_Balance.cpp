#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a;
		long long int b;
		a=pow(2,n)+2*(pow(2,n/2-1)-1);//Sum of last element and n/2 -1 elements from front
		b=2*(pow(2,n)-1)-a; //Sum of remaining elements
		cout<<abs(a-b)<<"\n"; //abs() for taking absolute value
	}
	return 0;
}

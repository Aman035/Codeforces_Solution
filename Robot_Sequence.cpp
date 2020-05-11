#include<bits/stdc++.h>
using namespace std;

/*LOGIC - Take initial position of robot to be (0,0)
	x is counter of up and down movement
	y is counter of right and left movement
	At every step check that if x and y both are 0 or not(ie Robot is at initial position or not)
*/

int numfun(char c)
{
	if(c=='U')
		return 1;

	if(c=='D')
		return -1;

	if(c=='R')
		return 1;

	if(c=='L')
		return -1;
	return 0;
}
int main()
{
	int n;
	int res=0;
	cin>>n;
	char A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	int x,y;
	
	for(int i=0;i<n-1;i++)
	{
		x=y=0;
		if(A[i]=='U'||A[i]=='D')
			x=numfun(A[i]);

		else
			y=numfun(A[i]);

		for(int j=i+1;j<n;j++)
		{

			if(A[j]=='U'||A[j]=='D')
				x+=numfun(A[j]);

			else
				y+=numfun(A[j]);

			if(x==0&&y==0)
				res++;
		}
	}
	cout<<res;

	return 0;
}

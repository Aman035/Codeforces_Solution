#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,n,m;
		cin>>h>>n>>m;
		if(h-m*10<=0)
			cout<<"YES\n";
		else
		{
			int f=0;
			for(int i=0;i<n;i++)
			{	
				h=h/2+10;
				if(h-m*10<=0)
				{
					f=1;
					cout<<"YES\n";
					break;
				}
			}
			if(f==0)
				cout<<"NO\n";
		}


	}
	return 0;
}

// TRY IMPLEMETING THIS

// #include<stdio.h>
// #include<stdlib.h>

// /* 
// 		CODED BY AVI
//     _    _     _  ___
//    / \	 \\   //  | |
//   / _ \   \\_//   | |
//  /_/ \_\   \_/    |_|
// */
// int Absorbtion(int hit)// implements absorbtion spell
// {
// 	hit=(hit/2)+10;
// 	return hit;
// }
// int Lighting_Strike(int hit)// implements Lighting strike spell
// {
// 	hit=hit-10;
//     return hit;
// }
// void hit_loss(int hit,int abs,int lgtstrk) 
// {
// 	while(abs)
// 	{
// 		if(hit<=20)// this is required as absorbtion spell is inaffective on health less than equal to 20 it might also  increase health of the dragon(eg -health=16-->health 18) 
// 			break;                                                                                      
// 		hit=Absorbtion(hit);
// 		abs--;
// 	}
// 	while(hit>0 && lgtstrk>0)
// 	{
// 		hit=Lighting_Strike(hit);
// 		lgtstrk--;
// 	}
// 	if(hit>0)
// 		printf("NO\n");
// 	else
// 		printf("YES\n");
// }
// int main()
// {
// 	int t;
// 	scanf("%d",&t);
// 	while(t)
// 	{
//     	int hit,abs,lgtstrk;
// 	    scanf("%d %d %d",&hit,&abs,&lgtstrk);	
// 	    hit_loss(hit,abs,lgtstrk);
// 	    t--; 
// 	}
// 	return 0;
// }

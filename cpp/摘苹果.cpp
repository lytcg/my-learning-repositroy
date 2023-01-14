#include <bits/stdc++.h>
using namespace std;
int a[11];
int h;
int L;
int n=0;

int main()
{	
	for(int i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	
	cin>>h;
	L=h+30;
	for(int i=1;i<=10;i++)
	{
		if(a[i]<=L) 
		{
			n++;	
		}	
	
	}
	cout<<n;
	return 0;		
}

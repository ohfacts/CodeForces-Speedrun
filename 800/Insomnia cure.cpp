#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	
	int w = 1;
	int x = 1;
	int y = 1;
	int z = 1;
	
	int count =0;
	for(int i = 1 ; i<d+1;i++)
	{
		if(i==k*w || i== l*x || i== m* y || i==n*z)
		{
			count++;
			
		}
		
		if(i==k*w)
		{
			
			w++;
		}
		if(i== l*x)
		{
			
			x++;
		}
		if(i== m* y)
		{
			
			y++;
		}
		if(i==n*z)
		{
			
			z++;
		}
		
	}
	cout<<count;
	return 0;
}
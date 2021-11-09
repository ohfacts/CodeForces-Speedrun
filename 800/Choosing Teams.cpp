#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int y;
	int c1 = 0;
	int c2=0;
	for(int i = 0 ; i<n;i++)
	{
		cin>>y;
		if(5-y>=k)
		{
			c1++;
			if(c1==3)
			{
				c2++;
				c1=0;
				
			}
			
			
		}
		
		
	}
	cout<<c2;
	return 0;
}
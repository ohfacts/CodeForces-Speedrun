#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,h;
	cin>>n>>h;
	
	int h2;
	int x = 0;
	
	while(n--)
	{
		cin>>h2;
		if(h2>h)
		{
			x = x + 2;
			
		}			
		
		else if(h2<=h)
		{
			
			x = x +1;
			
		}
		
	}
	cout<<x;
	return 0;
}
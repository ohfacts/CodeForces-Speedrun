#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int h[100];
	int count = 0;
	int x =0;
	for(int i =0;i<n;i++)
	{
		cin>>h[i];
		
	}
	int b = h[0];
	int s = h[0];
	int i1 = 0;
	int i2 = 0;
	for(int i =1;i<n;i++)
	{
		if(b<h[i])
		{
			i1 = i;
			b = h[i];
			
			
		}
		if(s>=h[i])
		{
			i2 = i;
			s = h[i];
		
			
		}
	}
	
	if(i1>i2)
	{
		x = -1;
	}
	
	count = (i1 + n-1-i2) + x;
	cout<<count;
	return 0;
}
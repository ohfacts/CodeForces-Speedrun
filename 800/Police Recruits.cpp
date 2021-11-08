#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	int p = 0;
	int m;
	int count = 0;
	while(n--)
	{
		cin>>m;
		if(m==-1)
		{
			if(p>0)
			{
				p--;
				
			}
			else
				count++;
		
		
		}
		else
			p = p + m;
		
	}
	
	cout<<count;
	
	return 0;
}
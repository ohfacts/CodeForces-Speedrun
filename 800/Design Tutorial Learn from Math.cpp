#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	
	int c1 = 0;
	int c2 = 0;
	int index = 0;
	for(int i = 4 ; i<n;i++)
	{
		c1 = 0;
		c2 = 0;
		for (int j = 1 ; j <= i;j++)
		{
			if(i%j == 0 )
			{
				c1++;
				
			}
			if( (n-i)%j == 0)
			{
				c2++;
			}
			if(c1>2 && c2>2)
			{
			cout<<i<<endl;
			cout<<n-i<<endl;
			break;
			}
		}
		if(c1>2 && c2>2)
			{
			
			break;
			}
		
		
	}
	
	
	return 0;
}
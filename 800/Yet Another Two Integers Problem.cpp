#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long int a,b;
	
	int sign ;
	
	int gyroZeppeli = 0;
	while(t--)
	{
		
		cin>>a>>b;
		int d = abs(a-b);
		while(d>0)
		{
			
			
			int r = d%10;	
			if(r == 0)
			{	
				gyroZeppeli += d/10;;
				d = 0;
				
			}
			else
			{
				d = d-r;
				gyroZeppeli ++;
			}
			
			 
			
		}
		cout<<gyroZeppeli<<endl;
		gyroZeppeli = 0;
	}
	
	
	
	return 0;
}
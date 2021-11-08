#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	
	int count = 0;
	while(n> 0)
	{
		if(n%100 == 0)
		{
			count++;
			n = n-100;
			
		}
		else if(n%20 == 0)
		{
			count++;
			n = n-20;
			
		}	
		else if(n%10 == 0)
		{
			count++;
			n = n-10;
			
		}
		else if(n%5 == 0)
		{
			count++;
			n = n - 5;
			
		}
		else if(n%1 == 0)
		{
			
			n--;
			count++;
		}

	
	}
cout<<count;

return 0;
}
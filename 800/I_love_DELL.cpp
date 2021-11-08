#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int p;
	cin>>n;
	cin>>p;
	int max,min;
	max = p;
	min = p;
	int count = 0;
	for(int  i = 0 ; i< n-1;i++)
	{
		cin>>p;
		if(p>max)
		{
			count++;
			max = p;
		}
		
		else if(p<min)
		{
			count++;
			min = p;
		}
			
		
	}
	cout<<count;
	
	return 0;
}
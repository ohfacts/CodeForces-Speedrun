#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	int a,b;
	int x = 0;
	int max = 0;
	
	while(n--)
	{
		cin>>a;
		cin>>b;
		x = x-a+b;
		if(x> max)
		{
			max = x;
			
		}
		
	}
	cout<<max<<endl;
	return 0;
}
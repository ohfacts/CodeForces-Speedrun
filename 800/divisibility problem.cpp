#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	int c = 0;
	
	for(int i = 0 ; i<t;i++)
	{
		
		cin>>a>>b;
		if(a%b!=0)
		{	
			int temp = a+ (b-a%b);
			
			c = temp - a;
		}
		cout<<c<<endl;
		c = 0;
	}
	
	return 0;
}
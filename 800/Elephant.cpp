#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int d;
	cin>>d;
	
	int x = 0;
	
	int x1 = d%5;
	d = d - x1;
	
	int x2 = d/5;
	
	if(x1 == 0)
	{
		cout<<x2<<endl;
		
	}
	else
	{
			cout<<1+x2<<endl;
	}
	
	
	return 0;
}
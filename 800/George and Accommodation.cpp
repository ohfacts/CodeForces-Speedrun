#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int a,b;
	int x = 0;
	
	while(n--)
	{
		cin>>a>>b;
		
		if(b-a>=2)
			x++;
		
		
	}
	cout<<x<<endl;
	
	
	return 0;
}
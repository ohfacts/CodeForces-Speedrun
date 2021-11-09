#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	long long int x,y,n,k;
	while(t--)
	{
		cin>>x>>y>>n;
		int k = 0;
		
		
		k = ((n-y)/x)*x + y;
		
	
		cout<<k<<endl;
		
	}
	
	return 0;
}
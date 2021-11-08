#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	
	int time = 0;
	int x = 0;
	for( int i = 1 ; i <=n;i++)
	{
		time = time + (5*i);
		
		if(time > 240-k)
		{
			break;
		}
		x++;
	}
	
		cout<<x;
	
	return 0;
}
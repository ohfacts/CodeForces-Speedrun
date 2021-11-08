#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int x = 0;
	cin>>n;
	string a;
	for(int i = 0; i<n;i++)
	{
		cin>>a;
		if(a == "++X" || a == "X++")
		{
			x++;
			
		}
		else
		{
			x--;	
			
		}
	
	}
	cout<<x<<endl;
	
	return 0;
}
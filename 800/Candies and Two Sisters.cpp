#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int n;
	cin>>t;
	
	int count = 0;
	for(int i =0;i<t;i++)
	{
		cin>>n;
		int a = n-1;
		int b = 1;
		
		if(n%2==0)
		{
			count = n/2-1;
		}
		else
			count = (n-1)/2;
		
		
		cout<<count<<endl;
		count = 0;
	}
	
	return 0;
}
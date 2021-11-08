#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	int p,p1;
	int count = 1;
	cin>>p1;
	for(int i = 0 ; i< n-1 ; i++)
	{
		cin>>p;
		
		
		if(p1!=p)
		{
			count++;
			int temp = p1;
			p1 = p;
			p = temp;
		}

	}		
	cout<<count<<endl;
	return 0;
}
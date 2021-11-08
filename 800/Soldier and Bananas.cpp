#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int k,n,w;
	cin>>k>>n>>w;
	int x = 0;
	for(int i = 0 ; i<w ; i++)
	{
		x = x + (i+1)*k;
		
		
	}
	if(x-n >0)
		cout<< x-n;
	else
	{
		cout<<0;
	}
	
	return 0;
}
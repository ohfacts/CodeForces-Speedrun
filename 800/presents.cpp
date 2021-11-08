#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	
	int ar[100];
	
	for(int i = 0 ; i<n ; i++)
	{
		
		cin>>m;
		ar[m-1] = i+1;
		
	}
	for(int i = 0 ; i<n ; i++)
	{
		
		cout<<ar[i]<<endl;
		
	}
	
}
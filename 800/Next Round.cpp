#include<bits/stdc++.h>
using namespace std;


int main()
{
int n , k , count;
count = 0;
	int p[100];
	
	cin>>n>>k;
	for(int i =0; i < n ; i++)
	{
		cin>>p[i];
			
	}
	for(int i =0; i<n ; i++)
	{
	     if(p[i] >=  p[k-1] && p[i]!=0)
		 {
			
			 count+=1;
		 }
		 
	}

	cout<<count;
	return 0;
}

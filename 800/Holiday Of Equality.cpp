#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int ar[100];
	int max = 0;
	for(int i = 0 ; i < n;i++)
	{
		cin>>ar[i];
		if(ar[i]>max)
			max = ar[i];
		
		
	}
	int s = 0;
	for(int i = 0 ; i < n;i++)
	{
		s = s + max-ar[i];
	}
	cout<<s<<endl;
	
	return 0;
}
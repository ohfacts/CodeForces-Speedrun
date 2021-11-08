#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long long int n;
	cin>>n;
	int dig;
	int count=0;
	while(n!=0)
	{
		dig = n%10;
		n = n/10;
		if(dig == 4 || dig == 7)
		{
			count++;
			
		}
		
	}
	
	if(count == 4 || count == 7)
	{
		cout<<"YES"<<endl;
		
	}
	else
	{
		cout<<"NO"<<endl;
		
	}
	
	return 0;
	
}
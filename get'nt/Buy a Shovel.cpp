// what I did was somewhat of a work around. Can't come up with an algorithm
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,n;
	cin>>k>>n;
	
	int dig = k%10;
	int temp = dig;
	int count = 1;
	if(dig == n || dig == 0)
	{
		cout<<"1"<<endl;
	}
	else if ( dig == 5 )
	{
		cout<<"2"<<endl;
	}
	
	else if( dig == 2 || dig == 4 || dig == 5 || dig == 8)
	{
		
		cout<<"5"<<endl;
	}

	
	else
	{
		while(temp!=n)
		{	
			temp = temp+dig;
			temp = temp%10;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
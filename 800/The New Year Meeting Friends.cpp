#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ar[3];
	
	for(int  i = 0 ; i<3;i++)
	{	
		cin>>ar[i];
	}
	for(int  i = 0 ; i<3;i++)
	{
		for(int  j = 0 ; j<2;j++)
		{
			if(ar[j] >ar[j+1])
				swap(ar[j],ar[j+1]);
		}
		
	}
	cout<<abs(ar[1]-ar[0])+abs(ar[1]-ar[2])<<endl;
	
	
	return 0;
}
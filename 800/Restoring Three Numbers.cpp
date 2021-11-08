#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	
	
	long long int  ar[4] = {a,b,c,d};
	
	
	for(int i = 0;i<4;i++)
	{
		for(int j = 0;j<3;j++)
		{
			if(ar[j]>ar[j+1])
			{
				swap(ar[j+1],ar[j]);
			}
		
		}
		
	}
	int x = ar[3]-ar[2];
	int y = ar[3]-ar[1];
	int z = ar[3]-ar[0];
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	
	
	return 0;
}
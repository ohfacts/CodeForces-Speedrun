#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	int x[100];
	int y[100];
	
	cin>>a;
	for(int i =0 ; i<a;i++)
	{
		cin>>x[i];
		
	}
	cin>>b;
	for(int i =0 ; i<b;i++)
	{
		cin>>y[i];
		
	}
	bool flag = false;
	for(int i = 1; i < n+1 ; i++)
	{
		flag  = false;
		for(int j = 0 ; j<100;j++)
		{
			
			if(x[j] == i || y[j] == i)
			{
				flag = true;
				break;
				
			}
			
			
		}
		if(flag == false)
		{
		   break;	
			
		}
		
	}

	if(flag == true)
	{
		
		cout<<"I become the guy."<<endl;
	}
		else
		cout<<"Oh, my keyboard!"<<endl;
	return 0;
}
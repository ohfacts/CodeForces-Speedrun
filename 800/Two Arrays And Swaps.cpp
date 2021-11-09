#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	int n,k;
	
	int a[30];
	int b[30];
	int max = 0;
	while (t--)
	{
		cin>>n>>k;
		
		for(int i = 0 ; i <n;i++)
		{
			cin>>a[i];
			
		}
		for(int i = 0 ; i <n;i++)
		{
			cin>>b[i];
			
		}
		//cout<<"oi josuke"<<endl; //works till here
		for(int i = 0 ; i <n;i++)
		{
			for(int j = 0 ; j <n-1;j++) // lol i wrote i instead of j
			{
				if(a[j]>a[j+1])
					swap(a[j],a[j+1]);
				if(b[j]<b[j+1])
					swap(b[j],b[j+1]);
					
			
			}
			
		}
		int sum = 0;
		for(int i = 0 ; i <k;i++)
		{
			if(b[i]>a[i])
			swap(a[i],b[i]);
		
		}
		for(int i = 0 ; i <n;i++)
		{
			sum = sum + a[i];
		
		}
		cout<<sum<<endl;
	}
	
	
	return 0;
}
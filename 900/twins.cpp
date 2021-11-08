#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	int n;
	int v;
	int sum1 = 0;
	int sum2 = 0;
	cin>>n;
	int ar[100];
	for(int i = 0; i <n ; i++)
	{
		cin>>v;
		ar[i] = v;
		sum2 = sum2 + v;
	}
	
	for(int i =0 ; i<n;i++)
	{
		for(int j = 0;j<n-1;j++)
		{
			if(ar[j]<ar[j+1])
			{
				int temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
				
			}
			
		}
		
	}
		int count = 0;
	for(int i = 0; i <n ; i++)
	{
		
		sum1 = sum1 + ar[i];
		count++;
		if(sum1>sum2-sum1)
			break;
		
	}
	cout<<count<<endl;
	return 0;
}
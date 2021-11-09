#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	
	int ar[40];
	int check ; // 1 odd , 0 even
	
	while(t--)
	{
		cin>>n;
		int count = 0;
		int c1 = 0;
		int c2 = 0;
		for(int i = 0 ; i< n;i++)
		{
			cin>>ar[i];
			if(ar[i]%2==0)
				c1++;
			else
				c2++;
				
		}
		if(c1 != c2 && c1 != c2+1)
			{
				count = -1;
			}
		else
		{
			for(int i = 0 ; i< n;i++)
			{
				if(i%2 == ar[i]%2)
				{
					
				}
				else
				{
			
					for(int j = i+1 ; j< n;j+=2)
					{
						if(j%2 != ar[j]%2)
						{
								swap(ar[i],ar[j]);
								count++;
								break;
						}
					}
				}
			}
		}
		
		cout<<count<<endl;
	}
	
	
	
	return 0;
}
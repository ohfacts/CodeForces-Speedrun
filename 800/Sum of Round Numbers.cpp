#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	int ar[5];
	while(t--)
	{
		int count = 0;
		int iteration =0;
		cin>>n;
		while(n!=0)
		{
			int dig = n%10;
			if(dig != 0)
			{
				ar[count] = pow(10,iteration)*dig;
				count++;
				
			}
			
			n = n/10;
			iteration++;

		}
		
		cout<<count<<endl;
		for(int i = 0 ; i<count ; i++)
		{
			cout<<ar[i]<<endl;
			
		}
		
	}
	
	return 0;
}
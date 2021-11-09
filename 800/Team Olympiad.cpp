#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c1=0;
	int c2=0;
	int c3=0;
	
	int t;
	int ar[5000];
	for(int  i =0;i<n;i++)
	{
		cin>>t;
		if(t==1)
			c1++;
		else if(t==2)
			c2++;
		else if(t==3)
			c3++;
		ar[i] = t;
				
	}
	int x = min(c1,min(c2,c3));
	cout<<x<<endl;;
	
	int count =0;
	bool f1 = false;
	bool f2 = false;
	bool f3 = false;
	if(x!=0)
	{
		for(int  i =0;i<x;i++)
		{
			count =0;
			f1 = false;
			f2 = false;
			f3 = false;
			for(int j = 0 ; j<n;j++)
			{
				if(ar[j]==1 && f1==false)
				{
					cout<<j+1<<endl;
					ar[j] = -1;
					count++;
					f1= true;
				}
				else if(ar[j]==2 && f2==false)
				{
					cout<<j+1<<endl;
					ar[j] = -1;
					count++;
					f2 = true;
				}
				else if(ar[j]==3 && f3==false)
				{
					cout<<j+1<<endl;
					ar[j] = -1;
					count++;
					f3 = true;
				}
				if(count == 3)
					break;
			}
			cout<<endl;
		}
		
	}
	
	
	return 0;
}
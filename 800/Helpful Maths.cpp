#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s;
	cin>>s;
	char temp;
	string x;
	for(int i =0; i<s.length();i++)
	{
		if(s[i]!='+')
			x = x + s[i];
		
	}
	
	for(int i =0;i<x.length()-1;i++)
	{	
		for(int j = 0; j<x.length()-i-1;j++)
		{
				if(x[j]>x[j+1])
				{
					temp = x[j];
					x[j] = x[j+1];
					x[j+1] = temp;
				}
			
			
		}
		
		
	}
	
	for(int i = 0;i<x.length();i++)
	{
		cout<<x[i];
		if(i==x.length()-1)
			break;
		cout<<"+";
		
	}

	return 0;
}
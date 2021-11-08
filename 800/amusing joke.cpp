#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	cin>>a>>b>>c;
	string s;
	s = a+b;
	
	for( int i = 0;i<a.length() + b.length();i++)
	{
		for(int j = 0 ; j<a.length()+b.length()-1;j++)
		{
			if((int)s[j] > (int)s[j+1])
			{
				char temp = s[j+1];
				s[j+1] = s[j];
				s[j] = temp;
				
			}
			
			
		}
		
		
	}
	for( int i = 0;i<c.length();i++)
	{
		for(int j = 0 ; j<c.length()-1;j++)
		{
			if((int)c[j] > (int)c[j+1])
			{
				char temp = c[j+1];
				c[j+1] = c[j];
				c[j] = temp;
				
			}
			
			
		}
		
		
	}
	
	
	
	if(c == s)
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
	
	return 0;
}
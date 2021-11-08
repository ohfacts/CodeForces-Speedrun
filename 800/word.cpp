#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string a;
	cin>>a;
	int count =0;

	for(int i =0;i<a.length();i++)
	{
		if(a[i]>=97 && a[i]<=122)
		{
			count++;

		}			
		
		
	}
	
	if(count>=(a.length()-count))
	{
		for(int i = 0; i <a.length();i++)
		{
			cout<<(char)tolower(a[i]);
		}
	
		
	}
	else
	{
		for(int i = 0; i <a.length();i++)
		{
			cout<<(char)toupper(a[i]);
		}
	
		
	}
	return 0;
}




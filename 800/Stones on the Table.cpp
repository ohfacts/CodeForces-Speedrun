#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s,x;
	
	cin>>n;
	cin>>s;
	
	int count = 0;
	for(int i =0; i<n;i++)
	{
		
		if(s[i] == s[i+1])
		{
			continue;
		}			
		x = x + s[i];
		
		
	}
	
	cout<<s.length()-x.length()<<endl;
	
}
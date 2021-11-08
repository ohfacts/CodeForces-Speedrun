#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int index =0;
	string x = "hello";
	for(int i =0 ; i<s.length();i++)
	{
		if(s[i] == x[index])
		{
			
			index++;
		}
		
	}
	if(index == 5)
	{
		cout<<"YES"<<endl;
		
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
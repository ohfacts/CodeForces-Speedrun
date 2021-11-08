#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	for(int i = 0 ; i < n;i++)
	{
		s[i] = tolower(s[i]);
		
		
	}
	
	set <char> a;
	
	for(int i = 0 ; i < n;i++)
	{
		a.insert(s[i]);
		
		
	}
	
	if(a.size() == 26)
		cout<<"YES";
	else
		cout<<"NO";
	
	
	return 0;
}
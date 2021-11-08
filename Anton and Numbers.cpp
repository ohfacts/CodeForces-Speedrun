#include <bits/stdc++.h>
using namespace std;
int main()
{
	set <char> s;
	char n;
	int extra =0;
while(n!='}')
{
	cin>>n;
	if(n!=',' && n!='{' && n!='}' && isspace(n)!= true)
	s.insert(n);
		
}

	cout<<s.size();
	
	
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string m,n;
	
	cin>>m>>n;
	int length = m.length();
	
	char ar[100];
	
	
	for(int i = 0 ; i<length ; i++)
	{
		if(m[i] == n[i])
			ar[i] = '0';
		else
			ar[i] = '1';
		
	}
	for(int i = 0; i<length ; i++)
	{
		cout<<ar[i];
		
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string n;
	while(t--)
	{
		cin>>n;
		cout<<n[0];
		
		for(int i = 1;i<n.length();i+=2)
		{
			cout<<n[i];
		}
		
			cout<<endl;
	}
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n;
	cin>>n;
	string x ="";
	for(int i =0; i<n.length();i++)
	{
		n[i] = tolower(n[i]);
		if(!(n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u' || n[i] == 'y'))
		{
			x = x + '.' + n[i];
		}

	}

	cout<<x<<endl;
	return 0;
}
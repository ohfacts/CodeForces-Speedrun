#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	
	string x = t;
	int n = s.length();
	if(s.length()==t.length())
	{
		
	
		for(int i = 0; i < n;i++)
		{
			x[i] = s[n-i-1];
		
		}
	}
	else{
		t = "oi";
		x = "josuke";
		
	}
	
	if(t == x)
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	
	return 0;
}
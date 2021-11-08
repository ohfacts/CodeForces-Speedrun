#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int x = min(a,b);
	cout<<x<<endl;
	int y = (max(a,b) - min(a,b))/2;
	cout<<y<<endl;
	
	return 0;
}
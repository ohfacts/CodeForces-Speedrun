#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int x;
	if(m%2==0 || n%2==0)
	{
		x = (m*n)/2;
	}
	else
	{
		x = ((max(m,n)-1)*min(n,m))/2 + min(n,m)/2;
	}
	cout<<x<<endl;
	return 0;
}
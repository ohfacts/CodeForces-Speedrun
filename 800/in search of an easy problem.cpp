#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int d;
	cin>>n;
	bool flag= false;
	while(n--)
	{
		cin>>d;
		if(d==1)
		{
			flag = true;
		}
		
	}
	if(flag == true)
	{
		cout<<"hard"<<endl;
	}
	else
		cout<<"easy"<<endl;
	
	
	return 0;
}
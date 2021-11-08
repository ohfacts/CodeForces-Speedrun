#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n;
	cin>>n;
	bool flag = false;
	long long unsigned int a;
	
	while(n--)
	{
		flag = false;
		cin>>a;
		while(a>1)
		{
			if(a%2==1)
			{
				flag = true;
				break;
			}
			else{
				a = a/2;
			}
		}
		
					
		if(flag == true)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}
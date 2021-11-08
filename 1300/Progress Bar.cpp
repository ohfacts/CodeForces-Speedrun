#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,t;
	cin>>n>>k>>t;
	
	int x = (t * n * k)/100;
	
	int rem = x%k;
	x = x-rem;
	int q = x/k;
	bool flag = false;
for(int i = 0; i<n;i++)
	
	{
		if(q!=0)
		{
			cout<<k<<endl;
			q--;
		}
		else if(q==0 && flag == false)
		{
			cout<<rem<<endl;
			flag = true;
		}
		else if( q==0 && flag == true)
		{
			cout<<"0"<<endl;
			
		}
		//cout<<rem<<endl;
	}
	
	
	
	return 0;
}
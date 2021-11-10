#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	
	while(t--)
	{
		int  a,b;
		cin>>a>>b;
		long long int x = 0;
	
	
	    if(a != 1 && b!=1 && max(a,b)>2*min(a,b)!= true)
	    {
	        x = min(a,b)*2;
	    }
		else if(a != 1 && b!=1 && max(a,b)>2*min(a,b)!= false)
		{
			x = max(a,b);
		}
	    else if(a==1 && b!=1)
	    {
	        x = b;
	    }
	    else if(b==1 && a!=1)
	    {
	        x = a;
	    }
	    else if(a==1 && b==1)
	    {
	        x = 2;
	    }
	    cout<<pow(x,2)<<endl;
		
	}
	
	return 0;
}
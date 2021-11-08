//scroll down for non commented code. Not sure how to modify commented code.

#include<bits/stdc++.h>
using namespace std;
int main()
{
/*	long  long int n,m,a,x,y;   
	cin>>n>>m>>a;
	if(n>a)
		
		{
			if(a>n%a)
				x =n + n%a;
			else
				x =n + (a-n%a);
			
		}
	else
	{
		x = a;
	}
	if(m>a)
	{
		if(a>m%a)
			y =m + m%a;
		else
			y =m + (a-m%a);	
	}
	else
	{
		y = a;
	}

	
	
	
	cout<<(x*y)/(a*a)<<endl;
	return 0;
*/

    long long n,m,a,x,y;
    cin>>n>>m>>a;
    x = (m+a-1);
    y = n+a-1;
    cout<<(y/a)*(x/a);
    return 0;
}



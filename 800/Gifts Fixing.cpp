#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long int a[1000];
	long long int b[1000];
	int n;
	
	while(t--)
	{
		int min1,min2;
		
		cin>>n;
		cin>>a[0];
		min1 = a[0];
		for(int i = 1;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<min1)
				min1 = a[i];
		}	
		cin>>b[0];
		min2 = b[0];
		for(int i = 1;i<n;i++)
		{
			cin>>b[i];
			if(b[i]<min2)
				min2 = b[i];
		}			
		long long int count = 0;
		for(int i = 0 ; i < n ; i++)
		{
		    while(true)
		    {
		        	if(a[i]>min1 && b[i]>min2)
		    	{
					int diff = min(a[i]-min1,b[i]-min2);
			    	a[i]-=diff;
			    	b[i]-=diff;
			    	count+=diff;
		    	}
		    	else if(a[i]>min1)
		    	{
		    	    count = count + (a[i]-min1);
			    	a[i] = min1;
			    	
				
		    	}
		    	else if(b[i]>min2)
		    	{
		    	    count = count + (b[i] - min2);
		    		b[i] = min2;
			    
				
		    	}
		    	else
		    	break;
		    
		      }
		
			
		}
			cout<<count<<endl;
	}
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n,t;
	string s;
	cin>>n>>t>>s;
	
	for(int i =0;i<t;i++)
	{
		
		for(int j =0 ; j<n;j++)
		{
			if(s[j] == 'B' && s[j+1] == 'G')
			{
				int temp = s[j];
			s[j] = s[j+1];
			s[j+1] = temp;
			j++;
				
			}
			
		}
		
	}
	cout<<s<<endl;
	return 0;
	
}
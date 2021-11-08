#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	
	string a,b;
	int sum1 = 0;
	int sum2 =0;
	cin>>a>>b;
	
	for(int i = 0; i< a.length();i++)
	{
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);  	
		
		if((int)a[i]>(int)b[i])
		{
			cout<<"1"<<endl;
			break;
		}
		else if((int)a[i]<(int)b[i])
		{
			cout<<"-1"<<endl;
			break;
		}
		else if((int)a[i] == (int)b[i] && i == a.length()-1)
		{
			cout<<"0"<<endl;
			break;
		}
		
	}
	
	
	
	return 0;
	
}
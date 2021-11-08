#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	char a;
	
	bool flag = false;
	int count = 0;
	int n = s.length();
	for(int i =0;i <n - 1;i++)
	{
		flag = false;
		a = s[i];
		for (int j = 0 ; j < n - 1 - i; j++)
		{
			
			if(a == s[i+1+j])
			{
				flag = true;		
			}
			
			
		}
		
		if(flag == true)
		{
			count++;
		}
		
	}
	if((n-count)%2 == 0)
	{
		cout<<"CHAT WITH HER!"<<endl;
		
	}
	else{
		
		cout<<"IGNORE HIM!"<<endl;
		
	}
	
	return 0;
}
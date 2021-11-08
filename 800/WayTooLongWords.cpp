
#include <bits/stdc++.h>
using namespace std;

int main()
{

	string word;
    int n;
    int lenght;
    cin >> n;
  
   while(n--)
    {
        cin >> word;
        if (word.length() > 10)
        {
            lenght = word.length();
            cout << word.at(0)<<word.length() - 2<< word.at(lenght - 1) << endl;
         
        }
		else
			cout<<word<<endl;
    }
    
    return 0;
}
// my first program here, lost oriignal file so I redid it here using the same code to preserve authenticity
#include <iostream>
using namespace std;

int main()
{    
    int n;    //number of problems
    int info; // sure/unsure
    int c1;
    int c2=0;
    //cout << "number of problems" << endl;
    cin >> n;
    //cout<<"and?"<<endl;

    for (int i = 0; i < n; i++)
    {    
        c1 = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> info;
            if(info==1)
                c1++;
            
        }
        cout << endl;
        if (c1 >= 2)
            c2++;
        

    }
    cout << c2;

    return 0;
}

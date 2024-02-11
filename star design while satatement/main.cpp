#include <iostream>

using namespace std;

int main()
{
    int i,j,rows;
    cout<<"Enter no. of rows : ";
    cin>>rows;
    i=rows;
    while(i>0)
    {j=i;
         i--;
        while(j>0)
        {cout<<"*\n";
        j--;
             }

        cout<<"*";



    }
    return 0;
}

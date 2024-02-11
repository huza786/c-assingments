#include <iostream>

using namespace std;

int main()
{
    int i,j,rows;
    cout<<"enter";
    cin>>rows;
    i=1;

    while(i<=rows)
    {j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;

    }

    return 0;
}

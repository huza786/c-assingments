#include <iostream>

using namespace std;

int main()
{
    int a,b,i,j,rows;
    a=1;
    b=1;
    cout<<"enter side length";
    cin>>rows;
    j=1;
    i=1;
    while(i<=rows)
    {
        cout<<"*";
        i++;
    }
    cout<<endl;
    while(j<=rows){ while(a<=(rows-2))
    {b=1;
        cout<<"*";
        while(b<=(rows-2))
        {
            cout<<" ";
            b++;
        }
        cout<<"*";
        cout<<endl;
        a++;
    } cout<<"*";
    j++;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l,rows;
    cout<<"Enter no of rows : ";
    cin>>rows;
    l=0;
    for(i=1;i<=rows;i++)
    {cout<<"*";
        for(j=1;j<=l;j++)
        {
           if(l%2!=0)
            {for(k=1;k<=1;k++)
            {
                cout<<"*\n";
            }}
            cout<<" ";
        }
        cout<<"*"<<endl;
        l=l+2;
    }
    for(i=1;i<=(rows+rows);i++)
        {cout<<"*";}

    return 0;
}

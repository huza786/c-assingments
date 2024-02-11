#include <iostream>

using namespace std;

int main()
{
    float a,i,j,b;
    int rows,row;
    cout<<"enter no of rows : ";
    cin>>rows;
    i=1;j=1;
    a=1;row=1;
    while(j<=(rows-2)){//upper part of diamond
            a=1;
            i=1;

            while(a<=row)
           {
        while(i<=((rows))-j)
        {
            cout<<" ";
            i++;
        }
        cout<<"*";
        a++;}

    cout<<endl;j++;
    row++;
    row++;}
i=1;j=1;b=1;
    a=1;row=rows;
    while(a<(rows+2))
    { i=1;
      j=1;
        while(i<=(row+3))
        {
            while(j<=(b+1))
            {
                cout<<" ";
                j++;
            }
            cout<<"*";
            i++;
        }
        cout<<endl;
        row--;
        row--;
        b++;
        a++;
    }

    return 0;
}

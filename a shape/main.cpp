#include <iostream>

using namespace std;

int main()
{
     int i,j,k,l,rows,m,n,o;
    rows=7;l=1;

    m=4;n=7;

    for(o=1;o<=l;o++){
           if(l<=7){ for(i=1;i<=n;i++)
    {   if(l<=7)
        {for(j=1;j<=l;j++)
        {
            for(k=1;k<=m;k++)
               {cout<<" ";}
            cout<<"*";

        }}
        cout<<" ";


    }
    cout<<"*\n";
        m--;
        n--;
        l++;}
        }
    return 0;
}

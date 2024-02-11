#include <iostream>

using namespace std;

int main()
{
 int i,j,k,l,m,n,o,rows;
 rows=7;l=rows;j=rows;m=1;n=1;
    for(i=1;i<=3;i++)
    {
        cout<<"*";
    }
    cout<<" ";
    for(i=1;i<=4;i++)
    {cout<<"*";}
    cout<<endl;
    n=1;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=1;j++)
        {
            for(k=1;k<=1;k++)
            {
                for(l=1;l<=1;l++)
                {
                    for(m=1;m<=1;m++)
                    {for(n=1;n<=1;n++)
                    {cout<<"*";}

                    cout<<"  ";}
                }cout<<"**";
            }cout<<"  ";
        }cout<<"*"<<endl;

    }


        return 0;
}

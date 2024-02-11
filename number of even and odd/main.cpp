#include <iostream>

using namespace std;

int main()
{   int j,e,o;//e for even o for odd
    int a[10];
    e=0;o=0;
    cout<<"Enter ten Numbers : ";
    for(int i=0;i<=9;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        {
            cout<<"even: ";
            cout<<a[i]<<endl;
        }
        else
        {
            cout<<"odd: ";
            cout<<a[i]<<endl;
        }e=0;o=0;
        for(j=0;j<=9;j++)

        {if(a[j]%2==0)
        e++;
           else
           {
               o++;
           }
        }
    }cout<<"even are "<<e<<endl;
    cout<<"odd are "<<o;
    return 0;
}

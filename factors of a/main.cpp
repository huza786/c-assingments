#include <iostream>

using namespace std;

int main()
{   int a,i,c;
    cout<<" enter a number : ";
    cin>>a;
    cout<<"the factors are: ";
    for(i=1;i<=a;i++)
    { if(a%i==0)
    {
        cout<<i<<",";
    }


    }
    return 0;
}

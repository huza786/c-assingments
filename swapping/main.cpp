#include <iostream>

using namespace std;
void swaping(int m,int n)
{
    int t=0;
     t=m;
     m=n;
     n=t;
    cout<<"Values after swapping :"<<endl;
    cout<<m<<endl;
    cout<<n;

}
int main()
{   int num1=4,num2=5;


    swaping(num1,num2);

    return 0;
}

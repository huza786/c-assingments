#include <iostream>

using namespace std;

int main()
{

float bill,discount,nbill;
cout<<"enter bill : ";
cin>>bill;
if(bill>=1000)
{
    discount=(bill*25/100);
    nbill=bill-discount;
}
else
{
    discount=0;
    nbill=bill-discount;

}
cout <<"your total bill is "<<nbill;

    return 0;
}

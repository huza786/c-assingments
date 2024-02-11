#include <iostream>

using namespace std;

int main()
{
    int nsal;
    int bsal;
    float tax;
    float bns;
    cout<<"enter your salary";
    cin>>bsal;
    if(bsal>=45000)
        tax=(bsal*6/100);
        bns=(bsal*5/100);
        nsal=bsal+bns-tax;
    if(bsal>=55000)
        tax=(bsal*7/100);
        bns=(bsal*6/100);
        nsal=bsal+bns-tax;
        if(bsal>=65000)
        tax=(bsal*8/100);
        bns=(bsal*7/100);
        nsal=bsal+bns-tax;
        cout<<"your salary is "<<nsal;

    return 0;
}

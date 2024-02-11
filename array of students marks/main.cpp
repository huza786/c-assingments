#include <iostream>
#define n 6
using namespace std;

int main()
{   int i;
    float marks[n];
    float sum_marks=0,avg_marks,per_marks;

    cout<<"enter your marks : \n";
    for(i=0;i<=n;i++)
    {
        cin>>marks[i];
    }
    for(i=0;i<=n;i++)
    {
        sum_marks=sum_marks+ marks[i];
    }
    avg_marks=sum_marks/n;
    cout<<avg_marks<<endl;
    per_marks=(avg_marks*100)/100;
    if(per_marks>=90)
    {
        cout<<"A+ Grade";
    }
    else if(per_marks>=80)
    {
        cout<<" B Grade";
    }
    else if(per_marks>=50)
    {
        cout<<"C Grade";
    }
    else
    {
        cout<<"F Grade";
    }
    return 0;
}

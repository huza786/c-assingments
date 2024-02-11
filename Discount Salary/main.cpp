#include <iostream>

using namespace std;

int main()
{
    int items_sold;
    float bonus;
    int net_salary;
    int b_salary;
    cout <<"ENTER YOUR SALARY: ";
    cin>>b_salary;
 cout<<"ENTER YOUR SOLD ITEMS: ";
 cin>>items_sold;
 if((items_sold >= 4)&&(items_sold<=18))
    {bonus=(items_sold*25),
    net_salary=(bonus+ b_salary);}
else if((items_sold>18)&&(items_sold<=58))
       {bonus=(items_sold*45);
    net_salary=(bonus+ b_salary);}
else if((items_sold>59)&&(items_sold<=9999))
        {bonus=(items_sold*105);
        net_salary=(bonus+ b_salary);}
else
    cout<<"INVALID ";
    cout<<" your salary is "<<net_salary;

    return 0;
}

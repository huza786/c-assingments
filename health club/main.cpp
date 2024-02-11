#include <iostream>

using namespace std;

int main()
{
    int month,choice,bill;
    cout<<"Health Club Membership"<<endl;
    cout<<"1.Standard Adult Membership\n2.Child Membership\n3.Senior Citizen Membership\n4.Quit the Program\n";
    cout<<"Enter Subscription : "<<endl;
    cin>>choice;
    cout<<"Enter Months : "<<endl;
    cin>>month;

    if(choice==1)
    {
        bill=(month*50);
    }
    else if(choice==2)
    {
        bill=(month*25);
    }
    else if(choice==3)
    {
        bill=(month*30);

    }
    else if(choice==4)
        {cout<<"Have a Great Day!"<<endl;}
     else
     {cout<<"INVALID CHOICE\n RUN THE PROGRAM AGAIN";}
     cout<<"Your Total Bill is "<<bill;
    return 0;
}

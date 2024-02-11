#include <iostream>

using namespace std;

int main()
{ float pr_id,com_nam,cus_nam;
 int pro_pr,quan,dis,t_bill,bill;
    cout<<"Product ID :_BK20123422_\n";

    cout<<"Product Price :______\n";
    cin>>pro_pr;
    cout<<"Quantity :______\n";
    cin>>quan;

    cout<<"Company Name :__M.K. Tex__\n";
    cout<<"Customer Name :_AHMAD_\n";
    bill=quan*pro_pr;

    if(bill>50000)
    { cout<<"Discount :__30__\n";
        t_bill=bill-((bill*30)/100);
    }
    else
    {cout<<"Discount :__0__\n";
        t_bill=bill;
    }
    cout<<"Total Bill :_"<<t_bill<<"_\n";
    return 0;
}

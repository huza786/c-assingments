#include <iostream>

using namespace std;

int main()
{
   int day,month,total,i;
   int mn[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   cout<<"enter day : ";
   cin>>day;
   cout<<"enter month : ";
   cin>>month;
   total=day;
   for(i=0;i<(month-1);i++)
   {
    total=total+mn[i];
   }

   cout<<"total day till now are "<<total;
    return 0;
}

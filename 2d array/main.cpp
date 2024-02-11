#include <iostream>

using namespace std;

int main()
{  int i,j;
   int arr[2][4];

   for(i=0;i<2;i++)
   {for(j=0;j<4;j++)
    {cout<<"Enter value in "<<"arr["<<i<<"]["<<j<<"]"<<": ";
       cin>>arr[i][j];}


     }
     for(i=0;i<2;i++)
         {for(j=0;j<4;j++)
           {cout<<arr[i][j]<<"\t";}
        cout<<endl;}

    return 0;
}

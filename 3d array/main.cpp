#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
int arr[2][2][2];
cout<<"Enter values for 3d array: ";
 for(i=0;i<2;i++)
 {
     for(j=0;j<2;j++)
     {
         for(k=0;k<2;k++)
         {
             cin>>arr[i][j][k];
         }
     }
 }cout<<"Values are : ";
 for(i=0;i<2;i++)
 {
     for(j=0;j<2;j++)
     {
         for(k=0;k<2;k++)
         {
             cout<<arr[i][j][k]<<"\t";
         }
         cout<<endl;
     }
 }

    return 0;
}

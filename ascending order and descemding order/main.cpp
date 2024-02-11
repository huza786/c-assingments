 #include <iostream>

using namespace std;

int main()
{
 int arr[5],mini,maxi,i,j,temp;
 cout<<"enter five digits : ";
 for(int i=0;i<5;i++)
 {cin>>arr[i];}
 cout<<"The orignal values are ";
 for(int i=0;i<5;i++)
 {cout<<arr[i]<<",";
 }for(i=0;i<5;i++)
 {  maxi=i;
     for(j=i+1;j<5;j++)
{if(arr[j]>arr[maxi])
         {
             maxi=j;
         }}if(maxi!=i)
         {
             temp=arr[i];
             arr[i]=arr[maxi];
             arr[maxi]=temp;}

 }cout<<"\n";
 cout<<"descending order: ";
         for(i=0;i<5;i++)
         {
             cout<<arr[i]<<",";
         }cout<<"\n";
         cout<<"ascending order: ";
         for(i=4;i>=0;i--)
         {
             cout<<arr[i]<<",";
         }






 return 0;
}

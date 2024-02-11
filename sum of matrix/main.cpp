#include <iostream>

using namespace std;

int main()
{
int a[2][2];int b[2][2];int c[2][2],i,j;
cout<<"enter value for first two by two matrix: \n";
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        cin>>a[i][j];
        cout<<"\t";
    }cout<<"\n";
}
cout<<"enter value for second two by two matrix: \n";
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        cin>>b[i][j];
    cout<<"\t";
    }cout<<"\n";
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        c[i][j]=a[i][j]+b[i][j];

    }
}
        cout<<"the resultant two by two matrix is : "<<endl;
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {

        cout<<c[i][j]<<"\t";
    }cout<<"\n";
}
    return 0;
}

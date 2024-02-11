#include <iostream>
#include<conio.h>
using namespace std;
class marks
{
private:
    int a,b,c;
public:
    void inp()
    {
        cout<<"Enter marks : ";
        cin>>a>>b>>c;

    }
    float average();
    int sum();
};
float marks::average()
{
    return (a+b+c)/3.0;
}
int marks::sum()
{
    return a+b+c;
}


int main()
{   marks m;
    float av;
    int s;

    m.inp();
    av=m.average();
    s=m.sum();
    cout<<"average : "<<av<<endl;
    cout<<"sum : "<<s<<endl;

}

#include <iostream>

using namespace std;
class complex1;
class calculator
{
public:
    int SumReal(complex1,complex1);
    int SumComplex(complex1,complex1);
};
class complex1
{
    int a,b;
    friend calculator;
public:
    void getData(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void showdata()
    {
        cout<<"The iota form is "<<a<<" + "<<b<<"i"<<endl;
    }

};
int calculator ::SumReal(complex1 o1,complex1 o2)
{
    return (o1.a+o2.a);
}
int calculator ::SumComplex(complex1 o1,complex1 o2)
{
    return (o1.b+o2.b);
}
int main()
{
    calculator cal;
    int a1,b1;
    complex1 a2,b2;
    cout << "Enter complex number(real/imaginary) : " << endl;
    cin >> a1 >> b1;
    a2.getData( a1 , b1 );
    cout << "Enter complex number(real/imaginary) : " << endl;
    cin>>a1>>b1;
    b2.getData(a1,b1);
    a2.showdata();
    b2.showdata();
    int i= cal.SumReal(a2,b2);
    cout<<"The sum of real part  of complex number is "<<i<<endl;
    int j=cal.SumComplex(a2,b2);
    cout<<"The sum of imaginary part of complex number is "<<j<<endl;



    return 0;
}

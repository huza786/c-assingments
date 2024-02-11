#include <iostream>

using namespace std;
class circle
{
private:
    float radius;
public:
    float circum();
    float area();
    void inp(float r);

};
void circle::inp(float r)
{
    radius =r;

}
float circle::area()
{
    return 3.14*radius*radius;

}
float circle :: circum()
{
    return 3.14*2*radius;
}


int main()
{   circle c;
    float rad;
    cout << "Enter radius: " << endl;
    cin>>rad;
    c.inp(rad);
    cout<<"Circumference : "<<c.circum()<<endl;
    cout<<"area: "<<c.area();

    return 0;
}

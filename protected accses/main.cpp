#include <iostream>

using namespace std;
class parent
{
protected:
    int a=5;
    public:
    void show1(void)
    {
        cout<<"parent "<<endl;
    }
};
class child : public parent
{
public:
    void show(void)
    {cout<<"the value is "<<a;}
};
int main()
{
    child c;
    c.show1();
    c.show();
    return 0;
}

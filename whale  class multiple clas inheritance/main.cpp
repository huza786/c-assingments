#include <iostream>
using namespace std;

class MarineAnimal
{
protected:
    void show1(void)
    {
        cout<<"I am a marine animal"<<endl;
    }
};
class Mammal
{
protected:
    void show2(void)
    {
        cout<<"I am a mammal"<<endl;
    }
};
class Whale : public MarineAnimal, public Mammal
{
public:
    void show3(void)
    {MarineAnimal m1;
    Mammal m2;
    m1.show1();
    m2.show2();

        cout<<"I belong to the both categories\n i.e both mammal and marine. "<<endl;
    }
};

int main()
{

    Whale m3;

    m3.show3();
    return 0;
}

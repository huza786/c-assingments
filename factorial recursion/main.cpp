#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalculator
{
protected:
    float a1, b1;

public:
    float add(float a1, float b1)
    {
        return a1 + b1;
    }
    float subtraction(float a1, float b1)
    {
        return a1 - b1;
    }
    float mutiplication(float a1, float b1)
    {
        return a1 * b1;
    }
    float division(float a1, float b1)
    {
        return a1 / b1;
    }
};
class ScientificCalculator : public SimpleCalculator
{
public:
    double power(float a1, float b1)
    {
        return pow(a1, b1);
    }
    double hypotenuse(float a1,float b1)
    {
        return hypot(a1, b1);
    }
    double sqroot(float a1)
    {
        return sqrt(a1);
    }
    double factorial(float a1)
    {
        if (a1 == 0)
        {
            return 1;
        }
        else
            return (a1 * factorial(a1 - 1));
    }
};
class HybridCalculator: public ScientificCalculator
{
};

int main()
{
    HybridCalculator h;
    cout<<"the "<<h.add(5,5);
    return 0;
}

#include <iostream>

using namespace std;
float cube (float a)
{ float cub;

cub=(a*a*a);
    return cub;
}
int main()

{ float a;
       cout<<"Enter a number: ";
    cin>>a;
   cout<<"cube is "<<cube(a);

}


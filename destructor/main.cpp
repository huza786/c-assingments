#include <iostream>

using namespace std;
 int cont=1;
class num
{
  public:
      num()
      {
          cout<<"Object created "<<cont<<endl;
          cont++;

      }
      ~num()
      { cont--;
        cout<<"Object destroyed "<<cont<<endl;

      }
};
int main()
{
    num num1;
    cout<<"entering block "<<endl;
    {
        num num2,num3;
    }
    cout<<"Doing some business "<<endl;
    return 0;
}

#include <iostream>
#include<math.h>
using namespace std;
class point;
float distance(point o1,point o2);

class point
{
    int x;
    int y;
 friend float distance(point ,point );
public:
    point()
    { cout<<"Enter point for 'X' : ";
    cin>>x;
    cout<<"Enter point for 'Y' : ";
    cin>>y;
    }
};
float distance(point o1,point o2)
{
    return (sqrt(pow((o1.x-o2.x),2)+pow((o1.y-o2.y),2) ));
}

int main()
{ point p1,p2;
  cout<<"Distance between two points is "<< distance(p1,p2);
    return 0;
}

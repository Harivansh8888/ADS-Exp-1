#include<iostream>
#include<math.h>
#define pie 3.14
using namespace std;

class shape
{
    public:
    int area=314;
    int p1,p2,p3,p4;
    int shape1(int l)
    {
        int b=area/l;
        p1=2*(l+b);
        return p1;
    }
     int shape2()
    {
      int s=sqrt(area);
      p2=4*s;
      return p2;
    }

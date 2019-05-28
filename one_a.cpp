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
     int shape3()
    {
        int r=sqrt(314/pie);
        p3=2*pie*r;
        return p3;
    
    }
       int shape4(int h)
    {
        int base=(2*area)/h;
        p4=h+base+sqrt((h*h)+(base*base));
        return p4;
    }
};
int main()
{
    int a=2;
    int c=4;
    shape rec;
    int d=rec.shape1(a);
    cout<<"The Perimeter of Rectangle is:"<<d<<endl;
    shape sq;
    int e=sq.shape2();
    cout<<"The Perimeter of Square is:"<<e<<endl;
    shape cir;
    int f=cir.shape3();
    cout<<"the perimeter of circle is:"<<f<<endl;
    shape tri;
    int g=tri.shape4(c);
   cout<<"the perimeter of triangle is:"<<g<<endl;
    return 0;

}

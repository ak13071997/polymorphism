#include<iostream>
using namespace std;

class polygon
{

};

class circle:public polygon
{
    int radius;
public:
       circle();
       circle(int);
       double calarea();
       double calperi|();
};
circle::circle()
{
    radius=5;
}
circle::circle(int r)
{
    radius=r;
}
double circle::calarea()
{
   return 3.142f*radius*radius;
}
double calperi()
{
   return 2*3.142f*radius;
}

class rectangle:public polygon
{
    int len;
    int brd;
public:
       rectangle();
       rectangle(int,int);
       double calarea();
       double calperi();
};
rectangler::rectangle()
{
     len=4;
     brd=6;
}
rectangle::rectangle(int l,int b)
{
     len=l;
     brd=b;
}
double rectangle::calarea()
{
    return len*brd;
}
double rectangle::calperi()
{
    return 2*(len+brd);
}

class square:public rectangle
{
public:
       square();
       square(int);
       double calarea();
       double calperi();
}
square::square()
{

}
square::square(int s):rectangle(s,s)
{

}
double square::square()
{
     return rectangle::calarea();
}
double square::square()
{
     return rectangle::calperi();
}

int main()
{
return 0;
}


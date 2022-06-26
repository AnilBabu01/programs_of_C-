#include <iostream>

using namespace std;

class swapp{

     private:
      int a=10,b=20;
     public:
      friend void ss(swapp &d);

};
void ss(swapp &a)
{
    a.a=a.a*a.b;
    a.b=a.a/a.b;
    a.a=a.a/a.b;

    cout<<"after swapping "<<"a = "<<a.a<<" b = "<<a.b<<endl;
}

class dd : public swapp
{

};
int main()
{
    dd g;
    ss(g);

    return 0;
}

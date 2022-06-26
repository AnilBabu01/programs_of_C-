#include <iostream>

using namespace std;
// here multiple inheritance
class a {
public:
    int x;
};

class b: public a
{
public:
    b()
    {
        x=10;
    }
};
//here multilevel inheritance
class c
{
public:
    int y;
    c()
    {
        y=15;
    }
};

class d:public b,public c
{
  public :
      void sum()
      {
          cout<<"sum is "<<x+y<<endl;
      }
};



int main()
{
    d obj1;
    obj1.sum();
    return 0;
}

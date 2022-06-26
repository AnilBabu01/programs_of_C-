#include <iostream>

using namespace std;
class a{
  protected:
 int x;
  public:
    a()
    {
        x=10;
    }

};
class b{
  protected:
 int x;
  public:
    b ()
    {
        x=122;
    }

};
class mul: public a, public b
{
     public:
      void showw()
    {
         int x=50;
        cout<<"x of a = "<<a::x<<endl;
        cout<<"x of b = "<<b::x<<endl;

    }
};

int main()
{
        mul obj;
        obj.showw();


    return 0;
}

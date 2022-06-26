#include <iostream>

using namespace std;

class addition{
  public :
      int a,b;
      int add (int x ,int y)
      {
          int c;
          a=x;
          b=y;
          c=a+b;
          return c;
      }
};


int main()
{

    addition a;
    cout<<a.add(10,10)<<endl;
    cout<<a.a<<endl;
    cout<<a.b<<endl;
      return 0;
}

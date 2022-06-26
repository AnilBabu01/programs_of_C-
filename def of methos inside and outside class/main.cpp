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
      void  sub ();



};

void addition::sub()
{
      int a=10,b=15,c;
        c=b-a;
        cout<< "result is = "<<c<<endl;
}
int main()
{

    addition a;
    cout<<a.add(10,10)<<endl;
    cout<<a.a<<endl;
    cout<<a.b<<endl;
    a.sub();
      return 0;
}

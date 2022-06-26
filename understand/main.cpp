#include <iostream>

using namespace std;

class addition{
  public :
      int a,b;
      void add (int x ,int y)
      {
          int c;
          a=x;
          b=y;
          c=a+b;
          cout<<"result = "<<c<<endl;
      }
};


int main()
{

    addition a;
    a.add(10,10);
      return 0;
}

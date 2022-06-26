#include <iostream>

using namespace std;
  template <typename t>
  t swapp(t x,t y)
  {
      t c;
      c=x;
      x=y;
      y=c;

      cout<<"after swapping "<<"a = "<<x<<" b "<<y<<endl;
  }
int main()
{
    int n1=10,n2=20;
    swapp<int>(n1,n2);
     swapp<float>(10.2,20);
      swapp<char>('a','c');



    return 0;
}

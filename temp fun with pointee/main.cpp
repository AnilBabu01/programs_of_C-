#include <iostream>

using namespace std;
  template <typename t>
  t swapp(t &x,t &y)
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
    float n=1.7,a=1.2;
    char ch='x',chh='g';
    cout<<"before swapping "<<"a = "<<n1<<" b "<<n2<<endl;
     swapp(n1,n2);
      cout<<"before swapping "<<"a = "<<n<<" b "<<a<<endl;
     swapp(n,a);
      cout<<"before swapping "<<"a = "<<ch<<" b "<<chh<<endl;
     swapp(ch,chh);





    return 0;
}

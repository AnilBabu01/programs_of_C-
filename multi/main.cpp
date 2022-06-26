#include <iostream>

using namespace std;
class base1{
  public:
      int a,b,c;
      base1(){
       cout<<"base 1 class called "<<endl;
      }

};
class base2{
  protected:
      int aa,bb,cc;
      base2(){
       cout<<"base 2 class called "<<endl;
      }

};
class derive:protected base1 ,public base2
{
public :
    derive()
    {
        a=10;
        cout<<" derive class called"<<endl;
         cout<<a<<endl;;
          cout<<aa;
    }


};

int main()
{
    derive dd;

    return 0;
}

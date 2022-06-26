#include <iostream>

using namespace std;

class base{
  public :
      int a=10,b=20;


};
class drived : public base {

public:
    int add;
    int showw()
    {
        add=a+b;
        cout<<"result is "<<add<<endl;
    }

};

int main()
{
     drived o;
     o.showw();


    return 0;
}

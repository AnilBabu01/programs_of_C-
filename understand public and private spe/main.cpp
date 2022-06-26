#include <iostream>

using namespace std;

class ud_public_private{

public :
    void add ();

private :
    int a=10,b=10;
public:
    int pvt()
    {
        return a;
    }
    int pvt1()
    {
        return b;
    }

};
void ud_public_private::add()
{
      int a,b;
      a=pvt();
      cout<<a<<endl;
      b=pvt1();
      cout<<b<<endl;
}

int main()
{
      ud_public_private obj;
         obj.add();
    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;

class outside {

 public:
     int x=10;
     class inside {
          public:
     static int x;


     };
};

int outside::inside::x=10;



int main()
{
    outside o;
    outside::inside o1;


    cout << "the value of inside class" <<outside::inside::x<< endl;
    return 0;
}

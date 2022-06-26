#include <iostream>

using namespace std;
class abc
{
    int i;
public:
    abc()
    {

        i=0;
        cout<<"constructor"<<endl;
    }
    ~abc()
    {
         cout<<"destructor"<<endl;
    }
};
 void f()
 {
    static abc obj;
       //abc obj;
 }
int main()
{
    int x=0;
     if(x==0)
     {
         f();
     }

    cout << "end" << endl;
    return 0;
}

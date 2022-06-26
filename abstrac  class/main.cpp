#include <iostream>

using namespace std;

class base
{
public:
    void getdata()
    {
        cout<<"void getdata "<<endl;
    }
   virtual void show()=0;

};
class derived :public base
{
public:
    void show()
    {
        cout<<"implementation of abtract class"<<endl;
    }
};

int main()
{
   //base obj;
   base *b;
   derived d;
   b=&d;
   b->getdata();
   b->show();

    return 0;
}

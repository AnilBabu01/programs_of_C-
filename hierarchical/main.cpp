#include <iostream>

using namespace std;

class a{

  public:
      int x,y;
      void getdata()
      {
          cout<<"enter  the value of x and y "<<endl;
            cin>>x>>y;
      }

};
class b: public a
{
public :
    void sum ()
    {
        cout<<"result is "<<x+y<<endl;
    }
};
class c:public a
{
public :
    void sub ()
    {
        cout<<"result is "<<x-y<<endl;
    }
};
class d : public a
{
public :
    void mul ()
    {
        cout<<"result is "<<x*y<<endl;
    }
};
int main()
{
    d obj;
    b obj1;
    c obj2;

  obj.getdata();
  obj.mul();
  obj1.getdata();
  obj1.sum();
  obj2.getdata();
  obj2.sub();


    return 0;
}

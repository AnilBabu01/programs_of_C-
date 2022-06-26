#include <iostream>

using namespace std;

class a
{
public:
   virtual void s()
    {
          cout<<"this is a class "<<endl;
    }

};

class b : public a
{
       public:
     void s()
    {
          cout<<"this is B class "<<endl;
    }
};
int main()
{
   a *obj1;
   b obj;
   obj1 =&obj;
   obj1->s();

    cout << "Hello world!" << endl;
    return 0;
}

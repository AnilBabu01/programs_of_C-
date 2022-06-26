#include <iostream>

using namespace std;

class a
{
public:
    void s()
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
     b o;
     o.s();

    cout << "Hello world!" << endl;
    return 0;
}

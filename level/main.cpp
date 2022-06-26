#include <iostream>

using namespace std;
class father{
public:
    int a,b,c;
protected:
    father()
    {
        cout<<"inside father class"<<endl;
    }

};
class son : private father
{
public:
    int aa,bb,cc;
protected:

    son()
    {
        cout<<"inside son class"<<endl;
    }
};
class grandson : protected son
{
  public:
    int aaa,bbb,ccc;
//protected:

    grandson()
    {
        cout<<"inside grandson class"<<endl;
    }
};

int main()
{
   grandson o;
        o.aaa;
    return 0;
}

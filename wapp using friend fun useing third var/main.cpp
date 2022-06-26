#include <iostream>

using namespace std;
class a
{
    public:
    int a=10,b=20;
    friend void swapp(a);
public:
    void display()
    {
        cout<<"after sawp a ="<<a<<endl;
        cout<<"after sawp b ="<<b<<endl;
    }

};

void swapp(a x)
{
    x.a=x.a*a.b;
    x.b=x.a/x.b;
    x.a=x.a/x.b;
}
int main()
{

    a obj;
    obj.display();

    cout << "Hello world!" << endl;
    return 0;
}

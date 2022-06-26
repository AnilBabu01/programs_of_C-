#include <iostream>

using namespace std;

class add{

public :
    int a,b;
    add(int x, int y)
    {
        int c;
        a=x;
        b=y;
        c=a+b;
        cout<<"result : = "<<c<<endl;
    }
};

int main()
{
    int a,b;
    cout << "enter the num1" << endl;
       cin>>a;
        cout << "enter the num2" << endl;
       cin>>b;

       add obj(a,b);

    return 0;
}

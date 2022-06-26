#include <iostream>

using namespace std;

class add{

public :
    int x,y,a,b;
    add( int xx ,int yy)
    {
        x=xx;
        y=yy;
        cout<<"the value inside normal constructor is "<<x<<" and "<<y<<endl;
    }

    add(add &d)
    {
        a=d.x;
        b=d.y;
         cout<<"the value inside copy constructor is "<<a<<" and "<<b<<endl;
    }

};

int main()
{
    add aa(10,20);
     add aa2(aa);
    return 0;
}

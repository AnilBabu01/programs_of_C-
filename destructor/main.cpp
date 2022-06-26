#include <iostream>

using namespace std;

class add{

public :
    int x,y;
    add( int xx ,int yy)
    {
        x=xx;
        y=yy;
        cout<<"the value inside normal constructor is "<<x<<" and "<<y<<endl;
    }
     ~add()
     {
         cout<<"inside destructor"<<endl;
     }

};

int main()
{
    add aa(10,20);

    return 0;
}

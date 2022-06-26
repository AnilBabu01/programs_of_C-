#include <iostream>

using namespace std;

class base{
    protected :
    base()
    {
        cout<<"inside base class"<<endl;
    }
};
class derive : protected base{
         public:
    derive()
    {
        cout<<"inside derive class"<<endl;
    }
};

int main()
{

    derive aa;
    return 0;
}

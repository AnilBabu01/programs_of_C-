#include <iostream>

using namespace std;
class x
{
public:
    static int i;

    static void ss()
    {
        cout<<"this static method"<<endl;
    }
};
int x::i=2;
int main()
{
    x obj;
    cout << "the value of static" <<x::i <<endl;
    x::ss;
    return 0;
}

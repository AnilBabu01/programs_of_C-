#include <iostream>

using namespace std;
class x
{
public:
    static int i;
};
int x::i=2;
int main()
{
    x obj;
    cout << "the value of static" <<x::i <<endl;
    return 0;
}

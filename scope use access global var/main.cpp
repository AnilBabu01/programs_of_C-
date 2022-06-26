#include <iostream>

using namespace std;
    int x=20;
int main()
{
    int x=10;
    cout << "global variable is "<<::x << endl;
     cout << "local variable is "<<x << endl;
    return 0;
}

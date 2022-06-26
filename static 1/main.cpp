#include <iostream>

using namespace std;
void counter()
{
    static int co;
     //int co;
      cout<<co++<<endl;
}

int main()
{
    int n=10,i;
    for(i=0;i<=n;i++)
    {
        counter();
    }
    cout << "Hello world!" << endl;
    return 0;
}

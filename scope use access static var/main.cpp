#include <iostream>

using namespace std;
class s
{
   private:
    static int x;
public:
    static int y;
    void showw(int x)
    {
        cout<<"variable of static "<<s::x<<endl;
         cout<<"variable of local "<<x<<endl;
    }
};
int s::y=1;
int s::x=2;
int main()
{
    int x=10;
    s ff;
    ff.showw(x);
    cout <<"s:: y = " <<s::y<< endl;

    return 0;
}

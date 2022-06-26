#include <iostream>

using namespace std;
class operation {

 int a,b,add,sub,mul;
public:
    void addd();
    void getdata();
    void subb();
    void mull();
    void division();
};

 inline void operation::getdata()
{
    cout<<"enter the value first "<<endl;
       cin>>a;
         cout<<"enter the value second "<<endl;
       cin>>b;

}
inline void operation::addd()
{
    int c;
    c=a+b;
    cout<<"addition = "<<c<<endl;
}
inline void operation::subb()
{
    int c;
    c=a-b;
    cout<<"subtraction = "<<c<<endl;
}
inline void operation::mull()
{
    int c;
    c=a*b;
    cout<<"multiplication = "<<c <<endl;
}
inline void operation::division()
{
    int c;
    c=a/b;
    cout<<"division = "<<c<<endl;
}


int main()
{
    operation obj;
     cout << "program using  inline" << endl;
    obj.getdata();
    obj.addd();
    obj.division();
    obj.mull();
    obj.subb();
    return 0;
}

#include <iostream>

using namespace std;
class swap{
  public:
      int a,b;
      void getswap()
      {
          int c;
          c=a;
          a=b;
          b=c;
          cout<<"after swapping "<<"a = "<<a<<"b = "<<b<<endl;
      }

};
int  main()
{

    swap sp;
     cout<<"enter value a "<<endl;
       cin>>sp.a;
     cout<<"enter the value b "<< endl;
        cin>>sp.b;
        sp.getswap();


  return 0;
}


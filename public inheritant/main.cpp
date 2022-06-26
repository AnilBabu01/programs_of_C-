#include <iostream>

using namespace std;

class base {
   private :
       int pvt=1;
   protected :
       int prot=2;
   public :
       int pub=3;
       int getpvt()
       {
           return pvt;
       }
};

class publicDrived : public base {

  public :
      int getprot()
      {
          return prot;
      }


};

int main()
{
     publicDrived obj;

    cout << "private = "<<obj.getpvt() << endl;
    cout << "protected = "<<obj.getprot() << endl;
    cout << "public = "<<obj.pub << endl;
    return 0;
}

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

class publicDrived : protected base {

  public :
      int pvtt;
      int getprot()
      {
          return prot;
      }
            int getpvt1()
       {
           return getpvt();
       }
       int getpub1()
       {
           return pub;
       }



};

int main()
{
     publicDrived obj;

    cout << "private = "<<obj.getpvt1() << endl;
    cout << "protected = "<<obj.getprot() << endl;
    cout << "public = "<<obj.getpub1() << endl;
    return 0;
}

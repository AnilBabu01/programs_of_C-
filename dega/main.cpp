#include <iostream>

using namespace std;
class fact{

 public :

        fact( )
        {
            int i,n;
            cout<<"enter the no"<<endl;
              cin>>n;
          unsigned long long  int factt=1;
            for(i=1;i<=n;++i)
            {
                factt *=i;
                cout<<factt<<endl;
            }
           cout<<" the factorial of " <<n<<" is "<<factt<<endl;

            }



};

int main()
{

        fact o();

    return 0;
}

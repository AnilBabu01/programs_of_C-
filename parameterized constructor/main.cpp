#include <iostream>

using namespace std;
class fact{

 public :

        fact( int n)
        {
            int i;
          unsigned long long  int factt=1;
            for(i=1;i<=n;++i)
            {
                factt *=i;

            }
           cout<<" the factorial of " <<n<<" is "<<factt<<endl;

            }



};

int main()
{
     int a;
    cout << "enter the n for get factorial" << endl;
        cin>>a;
        fact o(a);

    return 0;
}

#include <iostream>

using namespace std;


template <typename t>
t mx(t x, t y)
{
    return (x>y)?x:y;
}

int main()
{

    cout <<mx<int>(10,7)<< endl;
     cout <<mx<float>(0.3,7)<< endl;
      cout <<mx<char>('z','d')<< endl;
    return 0;
}

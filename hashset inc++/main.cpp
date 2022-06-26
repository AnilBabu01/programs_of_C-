#include <iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    if(s.find(10)==s.end())
    {
        cout<<" not found "<<endl;
    }
    else
    {
        cout<<"found"<<endl;
    }
    for( int i=s.begin()  ;i!=s.end()  ;i++)
    {
        cout<<(*i)<<" ";
    }

    s.clear();

    cout<<s.size()<<;




    return 0;
}

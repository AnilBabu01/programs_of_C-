#include <iostream>

using namespace std;
class box
{
   private:
       double lengthh;
       double breadth;
       double height;
public:
    box operator + (box b)
    {
        box Box;
        Box.lengthh=lengthh+b.lengthh;
        Box.breadth=breadth+b.breadth;
        Box.height=height+b.height;

         cout<<"length"<<lengthh<<endl;
           cout<<"breath"<<breadth<<endl;
             cout<<"height"<<height<<endl;

         cout<<"len"<<lengthh<<endl;


        return Box;

    }

    double getvalue()
    {
        return lengthh*breadth*height;
    }
    void setlenght(int len)
    {
        lengthh=len;
    }
    void setbreath(int len)
    {
        breadth=len;
    }
    void setheight( int len)
    {
        height=len;
    }
};

int main()
{
    box box1;
    box box2;
    box box3;
    box box4;
    double value=0.0;

     box1.setlenght(6.0);
     box1.setbreath(7.0);
     box1.setheight(5.0);

     box2.setlenght(12.0);
     box2.setbreath(13.0);
     box2.setheight(6.0);

     box3.setlenght(2.0);
     box2.setbreath(4.0);
     box2.setheight(5.0);

     value=box1.getvalue();
     cout<<"the value of box 1"<<value<<endl;
      value=box2.getvalue();
     cout<<"the value of box 2"<<value<<endl;
      value=box2.getvalue();
     cout<<"the value of box 3"<<value<<endl;

     box4=box1+box2+box3;

      value=box4.getvalue();
     cout<<"the value of box 4"<<value<<endl;
    return 0;
}

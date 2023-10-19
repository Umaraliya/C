#include <iostream>

using namespace std;

class box{
    int l,w,h;

public:
    int setVolume(int a, int b, int c)
    {
        l = a;
        w = b;
        h = c;
    }

    int getVolume()
    {
        return l*w*h;
    }

    friend box operator+(box m,box n)
    {
        box y;
        y.l = m.l + n.l;
        y.w = m.w + n.w;
        y.h = m.h + n.h;
        
        return y;
    }

    friend box operator++(box m)
    {
        box x;
        x.l = ++m.l;
        x.w = ++m.w;
        x.h = ++m.h;
        
        return x;
    }
};

int main()
{
    box b1,b2,b3,b4,b5,b6;

    b1.setVolume(2,2,2);
    cout << "Volume of B1 is : " << b1.getVolume() << endl;

    b2.setVolume(3,3,3);
    cout << "Volume of B2 is : " << b2.getVolume() << endl;

    b3 = b1 + b2;
    cout << "Volume of B3 is : " << b3.getVolume() << endl;

    b4 = ++b3;
    cout << "Volume of B4 is : " << b4.getVolume() << endl;

    return 0;
}
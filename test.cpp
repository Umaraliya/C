#include <iostream>

using namespace std;

class test{
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

    test operator++()
    {
        test t;
        t.l = ++l;
        t.w = ++w;
        t.h = ++h;

        return t;
    }

    test operator--()
    {
        test m;
        m.l = --l;
        m.w = --w;
        m.h = --h;
        
        return m;
    }

    test operator++(int)
    {
        test n;
        n.l = l++;
        n.w = w++;
        n.h = h++;
        
        return n;
    }

    test operator--(int)
    {
        test x;
        x.l = l--;
        x.w = w--;
        x.h = h--;

        return x;
    }
};

int main()
{
    test b1,b2,b3,b4,b5,b6;

    b1.setVolume(2,2,2);
    cout << "Volume of B1 is : " << b1.getVolume() << endl;

    b2.setVolume(3,3,3);
    cout << "Volume of B2 is : " << b2.getVolume() << endl;

    b3.setVolume(4,4,4);
    cout << "Volume of B3 is : " << b3.getVolume() << endl;

    b4.setVolume(7,7,7);
    cout << "Volume of B4 is : " << b4.getVolume() << endl;

    ++b1;
    cout << "After Volume of B1 is : " << b1.getVolume() << endl;

    --b2;
    cout << "Then Volume of B2 is : " << b2.getVolume() << endl;

    b3++;
    cout << "After Volume of B3 is : " << b3.getVolume() << endl;

    b4--;
    cout << "After Volume of B4 is : " << b4.getVolume() << endl;

}
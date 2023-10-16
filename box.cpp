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

    box operator+(box &n)
    {
        box x;
        x.l = l + n.l;
        x.w = w + n.w;
        x.h = h + n.h;
        
        return x;
    }

    box operator-(box &n)
    {
        box y;
        y.l = l - n.l;
        y.w = w - n.w;
        y.h = h - n.h;
        
        return y;
    }

    box operator*(box &n)
    {
        box z;
        z.l = l * n.l;
        z.w = w * n.w;
        z.h = h * n.h;
        
        return z;
    }

    box operator/(box &n)
    {
        box m;
        if(n.l != 0)
        {
            m.l = l / n.l;
        }
        else if (n.w != 0)
        {
            m.w = w / n.w;
        }
        else if (n.h != 0)
        {
            m.h = h / n.h;
        }
        
        // if (n.l != 0 && n.w != 0 && n.h != 0){
        //     m.l = l / n.l;
        //     m.w = w / n.w;
        //     m.h = h / n.h;
        // }
        // return m; 
    }
};

int main()
{
    box b1,b2,b3,b4,b5,b6;

    b1.setVolume(2,2,2);
    cout << "Volume of B1 is : " << b1.getVolume() << endl;

    b2.setVolume(3,3,3);
    cout << "Volume of B2ṇ is : " << b2.getVolume() << endl;

    b3 = b1 + b2;
    cout << "Volume of B3 is : " << b3.getVolume() << endl;

    b4 = b3 - b1;
    cout << "Volume of B4 is : " << b4.getVolume() << endl;

    b5 = b1 * b2;
    cout << "Volume of B5 is : " << b5.getVolume() << endl;

    b4 = b5 / b2;
    cout << "Volume of B6 is : " << b6.getVolume() << endl;
}
#include <iostream>

using namespace std;

class rect{
    friend rect Add(rect, rect, rect, rect);
    int l, w;

public:
    void setdata(int a, int b)
    {
        l = a, w = b;
    }
    int getArea()
    {
        return l * w;
    }

};
    rect Add(rect m, rect n, rect x, rect y)
    {
        rect r;
        
        r.l = m.l + n.l + x.l - y.l;
        r.w = m.w + n.w + x.w - y.w;
        
        return r;
    }

int main()
{
    rect a, b, c, d, e;

    a.setdata(2,3);
    cout << "Area A is : " << a.getArea() << endl;

    b.setdata(4,5);
    cout << "Area B is : " << b.getArea() << endl;

    d.setdata(6,7);
    cout << "Area D is : " << d.getArea() << endl;

    e.setdata(8,9);
    cout << "Area E is : " << e.getArea() << endl;

    c = Add(a, b, d, e);
    cout << "Area C is : " << c.getArea() << endl;

    return 0;
}   
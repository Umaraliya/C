#include <iostream>

using namespace std;

class triangle{

private:
    int base,height;
    int value1, value2, value3;

public:

    int b = base;
    int h = height;

    int a = value1;
    int d = value2;
    int c = value3;

int trian(int b, int h)
{
    return (b * h)/2;
}

int perameter(int a, int d, int c)
{
    return a + d + c;
}

};

int main()
{
    int i, j, x, y, z;

    cout << "Enter base : ";
    cin >> i;

    cout << "Enter height : ";
    cin >> j;

    cout << "Enter value1 : ";
    cin >> x;

    cout << "Enter value2 : ";
    cin >> y;

    cout << "Enter value3 : ";
    cin >> z;

    triangle mytriangle;

    int res = mytriangle.trian(i, j);
    int rout = mytriangle.perameter(x, y, z);

    cout << "res is : " << res << endl;
    cout << "rout is : " << rout;

    return 0;


}
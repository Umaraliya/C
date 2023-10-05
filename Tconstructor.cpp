#include <iostream>

using namespace std;

class Triangle{

private:
    int b, h;

public:

    Triangle(int base, int height)
    {
    int b = base;
    int h = height;
    
        int area = (b * h)/2;

        cout << "Area is : " << area << endl;
    }
};

int main()
{
    int x, y;

    cout << "Enter x value : " << endl;
    cin >> x;

    cout << "Enter y value : " << endl;
    cin >> y;

    Triangle t1(x,y);

    return 0;
}
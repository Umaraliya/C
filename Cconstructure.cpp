#include <iostream>

using namespace std;

class Circle
{
private:
    int radius;

public:
    Circle(int r)
    {
        radius = r;
    }

    int Cirlce(int r)
    {
        return 3.14 * r * r;
    }
};

int main()
{

    int r1;

    cout << "Enter Value" << endl;
    cin >> r1;

    Circle c1(r1);
    
    int area = c1.Cirlce(r1);
    cout << "Area of circle " << area << endl;

    return 0;
}
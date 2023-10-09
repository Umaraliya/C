#include <iostream>

using namespace std;

class solid
{
private:
    int h, r, b;

public:
    solid(int height, float radius, int base)
    {
        int h = height;
        float r = radius;
        int b = base;
    }
    void area(float radius)
    {
        float r = radius;

        float Area_Circle = 3.14 * (r * r);

        cout << "Circle is : " << Area_Circle << endl;
    }

    void area(int base)
    {
        int b = base;

        int Ans =  (h * b)/ 2;

        cout << "Answer is : " << Ans << endl;
    }

};

int main()
{
    solid s1, s2;

    int a, b, c;

    cout << "Enter value Height : ";
    cin >> a;

    cout << "Enter value Radius : ";
    cin >> b;

    cout << "Enter value Base : ";
    cin >> c;

    s1.area(b);
    s2.area(a, c);
    
    return 0;
}
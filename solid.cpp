#include <iostream>

using namespace std;

class solid
{
private:
    int length, height, width, radius, breadth, side;

public:
    solid()
    {
        cout << "Length is : ";
        cin >> length;

        cout << "Height is : ";
        cin >> height;

        cout << "Width is : ";
        cin >> width;

        cout << "Breadth is : ";
        cin >> breadth;

        cout << "Radius is : ";
        cin >> radius;

        cout << "Side is : ";
        cin >> side;
    }

    void area()
    {
        int ans = 3.14 * radius * radius;

        cout << "Circle is : " << ans << endl;
    }

    void area()
    {
        int ans =  (height * breadth)/ 2;

        cout << "Answer is : " << ans << endl;
    }

    void area()
    {
        int ans = 2 * height ( length + breadth);

        cout << "Answer is : " << ans << endl;
    }

    void area()
    {
        int ans = 4 * side * side;

        cout << "Answer is : " << ans << endl;
    }

    void area()
    {
        int ans = 2 * 3.14 * radius * height;

        cout << "Answer is : " << ans << endl;
    }

    void area()
    {
        int ans = 3.14 * radius * length;

        cout << "Answer is : " << ans << endl;
    }

    void area()
    {
        int ans = 4 * 3.14 * radius * radius;

        cout << "Answer is : " << ans << endl;
    }
};

int main()
{
    solid s1,s2,s3,s4,s5,s6,s7;

    s1.area();
    s2.area();
    s3.area();
    s4.area();
    s5.area();
    s6.area();
    s7.area();
    return 0;
}
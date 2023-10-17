#include <iostream>

using namespace std;

class mark
{
    int m, s;

public:
    void setVolume(int, int);
    void getTotal()
    {
        cout << "Total is : " << m + s << endl;
    }
};

void mark :: setVolume(int a, int b)
{
    m = a, s = b;
}

int main()
{
    mark m[5];
    int i, a, b;
    for (i = 0; i < 2; i++)
    {
        cout << "Enter a and b values :"; 
        cin >> a >> b;
        m[i].setVolume(a, b);
    }

    for (i = 0; i < 2; i++)
    {
        m[i].getTotal();
    }
    return 0;
}
#include <iostream>

using namespace std;

void smallest()
{
    int a,b;

    cout << "Enter A value : ";
    cin >> a;

    cout << "Enter B value : ";
    cin >> b;

    if(a < b)
    {
        cout << "A is smaller than B";
    }
    else
    {
        cout << "B is Smaller than A";
    }
}

int main()
{
    smallest();

    return 0;
}
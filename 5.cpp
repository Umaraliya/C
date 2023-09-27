#include <iostream>

using namespace std;

void rectangle()
{
    int a,w,l;

    cout <<"Enter value W : ";
    cin >>w;

    cout << "Enter value L : ";
    cin >>l;

    a = w * l;

    cout <<"A is : " << a;
}

int main()
{
    rectangle();

    return 0;
}
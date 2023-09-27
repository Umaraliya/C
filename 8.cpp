#include <iostream>

using namespace std;

void third()
{
    int a,b;

    cout <<"Enter A value : " << endl;
    cin >>a;

    cout <<"Enter B value : ";
    cin >>b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "A is : \n" << a;
    cout << "B is : \n" << b;
}

int main()
{
    third();

    return 0;
}
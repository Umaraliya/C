#include <iostream>
using namespace std;

void getData()
{
    int a, b;

    cout <<"Enter A value :"<< endl;
    cin >> a;

    cout << "Enter B value :";
    cin >> b;

    if(a > b)
    {
        cout <<"A is big : " << a;
    }
    else
    {
        cout <<"B is big : " << b;
    }
}

int main()
{
    getData();

    return 0;
}
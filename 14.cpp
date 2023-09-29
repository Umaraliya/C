#include <iostream>

using namespace std;

void century()
{
    int year;

    cout << "Enter year : ";
    cin >> year;

    if(year % 100 == 0)
    {
        cout << "Aah Yeahh";
    }
    else
    {
        cout << "sdfgerg";
    }
}

int main()
{
    century();

    return 0;
}
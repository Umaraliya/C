#include <iostream>

using namespace std;

void convert()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z')
    {
        cout << ch+32;
    }
    else
    {
        cout << ch-32;
    }
}

int main()
{
    convert();

    return 0;
}
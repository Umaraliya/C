#include <iostream>

using namespace std;

void square()
{
    int a,square;
    cout << "Enter the number: "; 
    cin >> a;

    square = a * a;

    cout << "Square is : " << square;
}

int main()
{
    square();

    return 0;
}
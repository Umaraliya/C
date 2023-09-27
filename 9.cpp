#include <iostream>

using namespace std;

void divisible()
{
    int n;

    cout <<"Enter value N : ";
    cin >> n;

    if(n % 5 == 0)
    {
        cout <<"Divisible by 5 : " << n;
    }
    else
    {
        cout <<"Not divisible by  : " << n;
    }
}

int main()
{
    divisible();

    return 0;
}
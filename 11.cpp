#include <iostream>

using namespace std;

void divisible()
{
    int n;
    
    cout <<"Enter valye N : ";
    cin >> n;

    if(n % 5 == 0 && n % 7 == 0)
    {
        cout <<"Divisible by 5 or 7 ";
    }
    else
    {
        cout <<"Not divisible by 5 or 7";
    }
}

int main()
{
    divisible();

    return 0;
}
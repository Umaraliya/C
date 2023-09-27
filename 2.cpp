#include <iostream>

using namespace std;

void stay()
{
    int a;

    cout <<"Enter A value :";
    cin >> a;

    if(a > 0)
    {
        cout <<"A is positive";
    }
    else
    {
        cout <<"A is negetive";
    }
}

int main()
{
    stay();

    return 0;
}
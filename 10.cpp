#include <iostream>

using namespace std;

void result()
{
    int n;
    
    cout <<"Enter valye N : ";
    scanf("%d",&n);

    if(n > 33)
    {
        cout <<"Pass";
    }
    else
    {
        cout <<"Fail";
    }
}

int main()
{
    result();

    return 0;
}
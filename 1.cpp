#include <iostream>
using namespace std;

void getData()
{
    int a, b;

    cout <<"Enter A value :"<< endl;
    cin >> a;

    cout << "Enter B value :";
    cin >>"%d",&b;

    if(a > b)
    {
        cout <<"A is big %d", a;
    }
    else
    {
        cout <<"B is big %d", b;
    }
}

int main()
{
    getData();

    return 0;
}
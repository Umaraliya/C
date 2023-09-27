#include <iostream>
using namespace std;

void getData()
{
    int a, b;

    cout <<"Enter A value :"<< endl;
    cin >> a;

    printf("Enter B value :");
    scanf("%d",&b);

    if(a > b)
    {
        printf("A is big %d", a);
    }
    else
    {
        printf("B is big %d", b);
    }
}

int main()
{
    getData();

    return 0;
}
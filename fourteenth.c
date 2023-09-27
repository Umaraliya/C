#include <stdio.h>
void century()
{
    int year;

    printf("Enter year : ");
    scanf("%d",&year);

    if(year % 100 == 0)
    {
        printf("Aah Yeahh");
    }
    else
    {
        printf("sdfgerg");
    }
}

int main()
{
    century();

    return 0;
}
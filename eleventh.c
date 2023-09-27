#include <stdio.h>
void divisible()
{
    int n;
    
    printf("Enter valye N : ");
    scanf("%d",&n);

    if(n % 5 == 0 && n % 7 == 0)
    {
        printf("Divisible by 5 or 7 ");
    }
    else
    {
        printf("Not divisible by 5 or 7");
    }
}

int main()
{
    divisible();

    return 0;
}
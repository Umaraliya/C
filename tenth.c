#include <stdio.h>
void result()
{
    int n;
    
    printf("Enter valye N : ");
    scanf("%d",&n);

    if(n > 33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
}

int main()
{
    result();

    return 0;
}
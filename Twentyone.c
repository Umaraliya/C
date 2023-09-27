#include <stdio.h>
void alphabet()
{
    char ch;

    for(ch='A' ; ch<='Z'; ch++)
    {
        printf("%c ",ch);
    }
    printf("\n");
}

int main()
{
    alphabet();
    return 0;
}
#include <stdio.h>
void convert()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c",ch+32);
    }
    else
    {
        printf("%c",ch-32);
    }
}

int main()
{
    convert();

    return 0;
}
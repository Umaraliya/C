#include <stdio.h>
void vowel()
{
    int vowel,consonant;
    char ch;

    printf("Enter Name : ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || 
    ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
}

int main()
{
    vowel();

    return 0;
}
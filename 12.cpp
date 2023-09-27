#include <stdio.h>
void vowel()
{
    int vowel,consonant;
    char ch;

    cout <<"Enter Name : ";
    cin >> ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || 
    ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout <<"vowel";
    }
    else
    {
        cout <<"consonant";
    }
}

int main()
{
    vowel();

    return 0;
}
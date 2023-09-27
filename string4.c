#include <stdio.h>

int main()
{
	char str[50];
	int vowel=0,consonant=0;

	printf("Enter str Name : ");
	scanf("%[^\n]s",&str);
	
	for(int i=0; str[i] !='\0'; i++)
	{
	if( str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
	{
		vowel++;
	}
	else
	{
		consonant++;
	}
	}
	printf("Vowel is a : %d\n",vowel);
	printf("Consonant is a : %d\n",consonant);
return 0;
}
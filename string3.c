#include <stdio.h>

int main()
{
	char str[]="skill";
	char str2[]="qode";
	char str3[55];
	int a=0,i;

	for(i=0; str[i] !='\0'; i++)
	{
		str3[a]=str[i];
		a++;
	}

	for(i=0; str2[i] !='\0'; i++)
	{
		str3[a]=str2[i];
		a++;
	}
	str3[a]='\0';

	printf("String is : %s",str3);
}
#include <stdio.h>

int main()
{
	char str[25];
	char str2[25];
	int i,a=0,b;

	printf("Enter value : ");
	scanf("%[^\n]s",&str);

	for(i=0; str[i] !='\0'; i++)
	{
		a++;
		b = a;
	}
	a=0;
	b--;
	
	for(i=b; i>=0; i--)
	{
		str2[i]=str[a];
		a++;
	}
b++;
	str2[b]='\0';

	printf("%s",str2);
}
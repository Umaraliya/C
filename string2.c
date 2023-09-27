#include <stdio.h>

int main()
{
	char str[33];
	char str2[33];
	int i,a=0,b;

	printf("Enter value : ");
	scanf("%[^\n]s",&str);

	for(i=0; str[i] !='\0'; i++)
	{
		printf("%c",str[i]);
		a++;
	}
	
	printf(" Enter %d\n : ",a);

	
}
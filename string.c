#include <stdio.h>

int main()
{
	char str[22],str2[22];
	int i,j,k;
	
	printf("Enter str value : ");
	scanf("[^\n]%s",&str);

	for(i=0; str[i] !='\0'; i++)
	{
		
	}
j=i;
	printf("%d",j);
	
	i=1;
	for(j=j;j>0;j--)
	{
		str2[j]=str[i];
		printf("%c",str2[i]);
		i++;	
		
	}
	
	printf("%s",str2);
}
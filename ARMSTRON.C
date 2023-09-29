#include <stdio.h>
#include <conio.h>
void main()
{
	int i, n,sum = 0, temp;
	clrscr();

	scanf("%d",&n);

	temp = n;

	while(n > 0)
	{
	i = n%10;
	sum = sum +(i*i*i);
	n = n/10;
	}
	if(temp == sum)
	{
	printf("number is armstrong");
	}
	else
	{
	printf("number is not armstrong");
	}

	getch();
}
#include <stdio.h>
#include <conio.h>

void main()

{
	int a,b,c;
	clrscr();

	scanf("%d %d %d",&a,&b,&c);

	if(a > b)
	{
		if(a > c)
		{
		printf("\nA is big");
		}
		else
		{
		printf("\nC is big");
		}
	}
	else
	{
		if(b > c)
		{
		printf("\nB is big");
		}
		else
		{
		printf("\nC is big");
		}
	}
	if(a==0)
	{
		printf("\nA is 0");
	}
	if(b==0)
	{
		printf("\nB is 0");
	}
	if(c==0)
	{
		printf("\nC is 0");
	}

	getch();

}
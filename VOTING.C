#include <stdio.h>
#include <conio.h>

void main()

{
	int year;
	clrscr();

	printf("Enter eligible year");
	scanf("%d",&year);

	if(year >= 18)
	{
		printf("Eligible for voting");
	}
	else
	{
		printf("not eligible for voting");
	}
	getch();
}
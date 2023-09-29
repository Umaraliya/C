#include <stdio.h>
#include <conio.h>

void main()

{
	int mark;
	clrscr();

	printf("Enter student mark :");
	scanf("%d",&mark);

	if(mark >= 75 && mark <= 100)
	{
		printf("Grade A");
	}
	else if(mark > 60 && mark < 75)
	{
		printf("Grade B");
	}
	else if(mark > 45 && mark < 60)
	{
		printf("Grade C");
	}
	else if(mark > 35 && mark < 45)
	{
		printf("Grade D");
	}
	else
	{
		if(mark < 35)
		{
			printf("Fail");
		}
	}
	getch();
}
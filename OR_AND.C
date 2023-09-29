#include <stdio.h>
#include <conio.h>

void main()

{
	int x,y;
	clrscr();

	printf("Enter value x :");
	scanf("%d",&x);

	printf("Enter value y :");
	scanf("%d",&y);

	if(x < 2000 || x > 3000)
	{
		printf("X is :%d\n",x);
	}
	if(y > 100 && y < 500)
	{
		printf("Y is :%d\n",y);
	}

	getch();
}
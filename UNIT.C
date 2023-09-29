#include <stdio.h>
#include <conio.h>

void main()

{
	int unit,total;
	clrscr();

	printf("Enter value unit");
	scanf("%d",&unit);

	if(unit <= 100)
	{
		total = unit * 0.6 + 50;
	}
	else if(unit >=100 && unit <= 300)
	{
		total = 60 + unit + (unit - 100) * 0.8 + 50;
	}
	else if(unit >= 300)
	{
		total = 220 + (unit - 300) * 0.9 + 50;
	}
	if(total >= 300)
	{
		total = total + total * 0.15;
	}
		printf("Charges: %d\n",total);
	getch();
}
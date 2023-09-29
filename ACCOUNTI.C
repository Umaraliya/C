#include <stdio.h>
#include <conio.h>

void main()

{
	float salary, total;
	clrscr();

	printf("Enter your salary");
	scanf("%f",salary);

	if(salary <= 5000)
	{
		total = salary * 0.8 * 0.2;
	}
	else if(salary >= 5000 && salary <= 10000)
	{
		total = salary * 0.12 * 0.3;
	}
	else if(salary >= 10000 && salary <= 15000)
	{
		total = salary * 0.15 * 0.4;
	}
	else if(salary >= 15000)
	{
		total = salary * 0.2 * 0.5;
	}
	if(total >= 15000)
	{
		total = total + total;
	 }
		printf("above salary%f",total);

	getch();
}
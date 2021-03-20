//program to add 45 day in a date
#include <stdio.h>
#include <stdlib.h>
struct date
{
	int year, month, day;	
};
void main()
{
	int value, days;
	struct date d;
	printf("Enter year month and day: ");
	scanf("%d %d %d", &d.year, &d.month, &d.day);
	if(d.month > 12 || d.day > 32)
	{
		printf("Month value cannot be greater than 12, day value cannot be greater than 30");
		exit(0);
	}
		
	printf("Enter days to increase: ");
	scanf("%d", &value);
	days = value;
	while(value != 0)
	{
		d.day = d.day + value;
		if(d.day > 30)
		{
			value = d.day - 30;
			d.month++;
			d.day = 0;
			if(d.month > 12)
			{
				d.year++;
				d.month = 1;
			}
		}
		else
			value = 0;
	}
	printf("Date after increasing %d days (Y/M/D): %d %d %d", days, d.year, d.month, d.day);
}

//program to add two dates
#include <stdio.h>
#include <stdlib.h>
struct date
{
	int year, month, day;
};

struct date addDate(struct date d[3])
{
	int temp;
	
	d[2].day = d[0].day + d[1].day;
	d[2].month = d[0].month + d[1].month;
	d[2].year = d[0].year + d[1].year;
	
	while(d[2].day > 30)
	{
		d[2].month++;
		temp = d[2].day - 30;
		d[2].day = 0;
		d[2].day += temp;
		while(d[2].month > 12)
		{
			d[2].year++;
			temp = d[2].month - 12;
			d[2].month = 0;
			d[2].month += temp;
		}
	}
	return d[2];
}
void main()
{
	struct date d[3], add;
	int i;
	
	//Taking the date information 
	for(i = 0; i < 2; i++)
	{	
		printf("Enter date (Y/M/D): ");
		scanf("%d %d %d", &d[i].year, &d[i].month, &d[i].day);	
		if(d[i].month > 12 && d[i].day > 30)
		{
			printf("Error in input of day or month!! ");
			exit(1);
		}
	}
	
	//passing the information to the function
	add = addDate(d);
	
	printf("Date after Addition: ");
	printf("%d %d %d", add.year, add.month, add.day);
}

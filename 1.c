// program to store the information of the student using array
#include <stdio.h>
struct student
{
	int roll, age;
	char name[20];
	float mark;
}e;
void main()
{
	printf("Enter name: ");
	fflush(stdin);
	gets(e.name);
	printf("Enter Roll No: ");
	scanf("%d", &e.roll);
	printf("Enter Age: ");
	scanf("%d", &e.age);
	printf("Enter mark: ");
	scanf("%f", &e.mark);
	printf("\n\nName\t\tRoll\tAge\tMark");
	printf("\n%s\t%d\t%d\t%.1f",e.name,e.roll,e.age,e.mark);
}

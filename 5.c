//program to store the information of student and display info of roll 2 student 
#include <stdio.h>
struct student
{
	int roll, age;
	char name[20];
};
void main()
{
	int i;
	struct student std[5];
	for(i = 0; i < 5; i++)
	{
		printf("Enter Name: ");
		gets(std[i].name);
		printf("Enter Roll: ");
		scanf("%d", &std[i].roll);
		printf("Enter Age: ");
		scanf("%d", &std[i].age);	
	}
	for(i = 0; i < 5; i++)
	{
		if(std[i].roll == 2)
		{
			printf("Name: %s", std[i].name);
			printf("Roll: %d", std[i].roll);
			printf("Age: %d", std[i].age);
		}
	}
}

//program to store information of employees using structure
#include <stdio.h>
struct employee
{
	int emp_id;
	char emp_name[20];
	char emp_post[20];
	float salary;
};
void main()
{
	int i;
	struct employee e[10];
	printf("Enter Information of 10 Employees: \n");
	for(i = 0; i < 10; i++)
	{
		printf("%d)\n", i + 1);
		printf("Enter Employee Name: ");
		fflush(stdin);
		gets(e[i].emp_name);
		printf("Enter Employee Id: ");
		scanf("%d", &e[i].emp_id);
		printf("Enter Employee Post: ");
		fflush(stdin);
		gets(e[i].emp_post);
		printf("Enter Salary: ");
		scanf("%f", &e[i].salary);	
	}
	
	printf("\nDisplaying Information of Employee\n");
	for(i = 0; i < 10; i++)
	{
		printf("\nName: %s\n", e[i].emp_name);
		printf("Id: %d\n", e[i].emp_id);
		printf("Post: %s\n", e[i].emp_post);
		printf("Salary: %.2f\n", e[i].salary);
	}
}

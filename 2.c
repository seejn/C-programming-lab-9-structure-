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
	struct employee e;
	printf("Enter Employee Name: ");
	gets(e.emp_name);
	printf("Enter Employee Id: ");
	scanf("%d", &e.emp_id);
	printf("Enter Employee Post: ");
	fflush(stdin);
	gets(e.emp_post);
	printf("Enter Salary: ");
	scanf("%f", &e.salary);
	
	printf("\nDisplaying Information of Employee\n");
	printf("Name: %s\n", e.emp_name);
	printf("Id: %d\n", e.emp_id);
	printf("Post: %s\n", e.emp_post);
	printf("Salary: %.2f\n", e.salary);
}

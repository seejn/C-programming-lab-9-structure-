#include <stdio.h>
#include <string.h>
struct students
{
	int roll;
	char name[20], address[20];
}s[100];
void main()
{
	int n, i;
	printf("Enter Number of students: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("\n\nInformation for Student %d: ", i + 1);
		printf("\nEnter name: ");
		fflush(stdin);
		gets(s[i].name);
		printf("Enter Roll No: ");
		scanf("%d", &s[i].roll);
		printf("Enter address: ");
		fflush(stdin);
		gets(s[i].address);
	}
	printf("\n\n###########Displaying Information of Students living in Kathmandu###########\n");
	for(i = 0; i < n; i++)
	{
		strupr(s[i].address);
		if(strcmp(s[i].address,"KATHMANDU") == 0)
		{
			printf("Name: %s \nRoll: %d \nAddress: %s\n\n", s[i].name, s[i].roll, s[i].address);
		}
	}
}

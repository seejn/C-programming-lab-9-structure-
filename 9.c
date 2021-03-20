//program to store the information of the customer
#include <stdio.h>
struct customer
{
	int acc_no;
	float balance;
	char name[20], s_name[20];	
};

// Function to display the information of the customer having balance less than $200
void lessBalance(struct customer c[15], int n)
{
	int i; 
	printf("NAME      \tLASTNAME\tACCOUNT NO.\tBALANCE\n");
	for(i = 0; i < n; i++)
	{
		if(c[i].balance < 200)
		{	
			printf("%s   \t%s   \t%d      \t%.1f\n", c[i].name, c[i].s_name, c[i].acc_no, c[i].balance);
		}
	}	
}

//Function to add the amount in balance greater than 1000
void addBalance(struct customer c[15], int n)
{
	int i;
	for( i = 0; i < n; i++)
	{
		if(c[i].balance > 1000)
		{
			c[i].balance += 100;
			printf("NAME      \tLASTNAME\tACCOUNT NO.\tBALANCE\n");
			printf("%s   \t%s   \t%d      \t%.1f\n", c[i].name, c[i].s_name, c[i].acc_no, c[i].balance);
		}	
	}
}

void main()
{
	struct customer c[15];
	int n, i;
	
	printf("Enter nth customer: ");
	scanf("%d", &n);
	printf("\n");
	
	//Taking information of the nth customer
	for(i = 0; i < n; i++)
	{
		printf("Information for %d customer \n",  i + 1);
		
		printf("Enter First Name: ");	
		fflush(stdin);
		gets(c[i].name);
		strupr(c[i].name);
		
		printf("Enter Last Name: ");	
		fflush(stdin);
		gets(c[i].s_name);
		strupr(c[i].s_name);
		
		printf("Enter Account No. : ");
		scanf("%d", &c[i].acc_no);
		
		printf("Enter Balance ($): ");
		scanf("%f", &c[i].balance);
		
		printf("\n");
	}	
	printf("\n");
	
	//Displaying the information of the customer having balance less than $200
	printf("Information of customer having balance less than $200\n");	
	lessBalance(c, n);
	
	//Displaying the balance after increment
	printf("\n");
	printf("Information of customer having balance greater than $1000");
	printf("\n");
	addBalance(c, n);
}

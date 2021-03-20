//program to store info of students in struct
#include <stdio.h>
#include <string.h>
struct student
{
	int roll;
	char name[20];
	char s_name[20];
	float marks[5];
	float total;	
}s[5];

//function for displaying the marksheet
void displayMarksheet(char sub[5][15], int n)
{
	int i, j;
	printf("Roll\tName      \tLastName  \t");
	for(i = 0; i < n; i++)
	{
		printf("%s\t", sub[i]);
	}
	for(i = 0; i < n; i++)	
	{
		printf("\n%d\t%s   \t%s   \t", s[i].roll,s[i].name, s[i].s_name);
		for(j = 0; j < n; j++)			
			printf("%.1f      \t", s[i].marks[j]);
	}
}

//function for displaying the total mark of the students
int total(int i, int n)
{
	int j;
	s[i].total = 0;
	for(j = 0; j < n; j++)
	{
		s[i].total = s[i].total + s[i].marks[j];
	}
	printf("\n%s %s: %.1f", s[i].name, s[i].s_name, s[i].total);
}

//function for arranging the index in descending order
int max(int n, int total[5])
{
	int i, highest = 0, highest_index;
	for( i = 0 ; i < n; i++)
	{
		if(total[i] >= highest)
		{
			highest = total[i];
			highest_index = i;
		}
	}
	
	return highest_index;
}

//function for displaying the marksheet of the student in descending order
void descending(char sub[5][15], int n)
{
	int i, j, h = 0;
	int in, index[5], total[5];
	
	//arranging in descending order
	for(i = 0; i < n; i++)
		total[i] = s[i].total;
		
	for(i = 0; i < n; i++)
	{
		in = max(n, total);
		index[i] = in;
		total[in] = 0;
	}
		
	//displaying in format
	printf("Roll\tName      \tLastName  \t");
	for(i = 0; i < n; i++)
	{
		printf("%s\t", sub[i]);
	}
//	printf("\n");
//	for(i = 0; i < n; i++)
//	{
//		printf("Index: %d\n", index[i]);
//	}
	for(i = 0; i < n; i++)	
	{
		in = index[i];
		printf("\n%d\t%s   \t%s   \t", s[in].roll, s[in].name, s[in].s_name);
		for(j = 0; j < n; j++)			
			printf("%.1f      \t", s[in].marks[j]);
	}
}

//function for finding the average of student in programming 
float averageP(int n)
{
	float average, ptotal = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		ptotal = ptotal + s[i].marks[0];
	}
	average = ptotal / n;
	return average;
}

//function for displaying the average mark of each student
void average(int n)
{
	int i;
	float average[5];
	for(i = 0; i < n; i++)
	{
		average[i] = s[i].total / n;
		printf("%s %s: %.1f \n", s[i].name, s[i].s_name, average[i]);
	}
}

//function for finding the percentage of the student named NABARAJ
float percentage()
{
	int i;
	float percentage;
	for( i = 0; i < 5; i++)
	{
		if(strcmp(s[i].name, "NABARAJ") == 0)
			percentage = (s[i].total / 500) * 100;
		else
			percentage = 0;
	}
	return percentage;
}

//function for displaying the topper 
void topper()
{
	int i, highest = 0, highest_index;
	for( i = 0 ; i < 5; i++)
	{
		if(s[i].total > highest)
		{
			highest = s[i].total;
			highest_index = i;
		}
	}
	printf("Name: %s %s", s[highest_index].name, s[highest_index].s_name);
}

//main function
void main()
{
	int n = 5, i, j;
	char subjects[5][15] = {
					"C         ",
					"English   ",
					"Math      ",
					"Management",
					"Sanskrit  "
					};
					
	//Taking the informaiton of students
	for(i = 0; i < n; i++)
	{
		printf("Info of Student %d: \n", i + 1);
		printf("Enter First Name: ");
		fflush(stdin);
		gets(s[i].name);
		strupr(s[i].name);
		printf("Enter Last Name: ");
		fflush(stdin);
		gets(s[i].s_name);
		strupr(s[i].s_name);
		printf("Enter Roll: ");
		scanf("%d", &s[i].roll);
		printf("Enter marks of %d subject\n", n);
		for(j = 0; j < n; j++)	
		{
			printf("Mark of %s: ", subjects[j]);
			scanf("%f", &s[i].marks[j]);
		}	
		printf("\n");
	}
	
	//Displaying the marksheet in the format
	printf("####### MARKSHEET #######");
	printf("\n");
	displayMarksheet(subjects, n);
	printf("\n");
	
	//Displaying total marks 
	printf("\nTotal Mark of: ");
	for(i = 0; i < n; i++)
	{
		total(i, n);
	}
	printf("\n\n");
	
	//Displaying the marksheet in Descending order format
	printf("####### MARKSHEET AS PER RANK ####### ");
	printf("\n");
	descending(subjects, n);
	printf("\n");
	
	//Displaying the average mark of programming
	printf("\n\n");
	printf("Average Mark in Programming");
	printf("\n");
	printf("%.1f", averageP(n));
	printf("\n");
	
	//Displaying the percentage of NABARAJ
	printf("\n");
	printf("The Percentage of NABARAJ: %.1f", percentage());
	printf("\n");
	
	//Displaying the name of the topper
	printf("\n");
	printf("Highest Mark Obtained by ");
	printf("\n");
	topper();
	printf("\n");
	
	//Displaying the average marks of the students
	printf("\n");
	printf("Average mark of :");
	printf("\n");
	average(n);	
}

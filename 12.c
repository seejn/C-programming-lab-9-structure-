//program to store name in a union
#include <stdio.h>
union name
{
	char fname[8], mname[10], lname[8]	
};
void main()
{
	union name n;
	printf("Enter First name: ");
	gets(n.fname);
	printf("First name: ");
	puts(n.fname);
	
	printf("Enter Middle name: ");
	gets(n.mname);
	printf("Middle name: ");
	puts(n.mname);
	
	printf("Enter Last name: ");
	gets(n.lname);
	printf("Lastp name: ");
	puts(n.lname);
}

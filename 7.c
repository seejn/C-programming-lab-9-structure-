//program to store the information of rainfall of different cities
#include <stdio.h>
struct data
{
	int avRainfall;			
};
struct weather
{
	char mth[10];
	char city[15];
	struct data d[6];
};
void main()
{
	int i, j;
	struct weather m[6];
	printf("Enter Information: \n");
	for( i = 0; i < 5; i++)
	{
		printf("\nEnter city: ");
		scanf("%s", &m[i].city);
		for( j = 0; j < 6; j++)
		{
			printf("\nEnter month: ");
			fflush(stdin);
			scanf("%s", &m[j].mth);
			printf("Enter Average Rainfall: ");
			fflush(stdin);
			scanf("%d", &m[i].d[j].avRainfall);
		}
	}
	printf("\n\n\t");
	for(i = 0; i < 6; i++)
	{
		printf("\t%s", m[i].mth);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("\n%s\t\t", m[i].city);
		for(j = 0; j < 6; j++)
		{
			printf("%d\t",m[i].d[j].avRainfall);
		}
	}
}

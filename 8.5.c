//finding the index of respective value in descending order of an array
#include <stdio.h>
int max(int total[5])
{
	int i, highest = 0, highest_index;
	printf("\nTotal inside the max function\n");
	for( i = 0; i < 5; i++)
		printf("%d ", total[i]);
	for( i = 0 ; i < 5; i++)
	{
		if(total[i] >= highest)
		{
			highest = total[i];
			highest_index = i;
		}
	}
	printf("\nMax_value: %d\n", highest);
	return highest_index;
}
void main()
{
	int i, in, j;
	int total[5] = {55,45,44,89,14};
	int index[5];
	
	for(i = 0; i < 5; i++)
	{
		in = max(total);
		index[i] = in;
		total[in] = 0;
		printf("\nTotal inside main function\n");
		for(j = 0; j < 5; j++)	
			printf("%d ", total[j]);
	}
	
	printf("\nIndexes: \n");
	for(i = 0; i < 5; i++)
		printf("%d ", index[i]);
}

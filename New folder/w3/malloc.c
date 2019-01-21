#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *score, no, i;
	printf("Enter the Number of Students: ");
	scanf("%d", &no);
	printf("The size of integer is %d\n", sizeof(int));
	score = (int*) malloc(no * sizeof(int));
	
	for(i=0; i<no; i++)
	{
		printf("Enter score (Student %d) :", i+1);
		scanf("%d", &score[i]);
	}
	
	for(i=0; i<no; i++)
	{
		printf("Score [%d] is %d\n", i+1, score[i]);
	}
	free(score);
	
	return 0;
}

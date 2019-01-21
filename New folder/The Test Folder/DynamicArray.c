#include <stdio.h>
#include <stdlib.h>

int *arr;
int MAX1, MAX2;
int *create(int);
int disply(int *, int);

int main()
{
	int *a, *b;

	printf("Enter the Number of Elements for Array 1; ");
	scanf("%d", &MAX1);
	printf("\nEnter the Number of Elements for the First Array: \n");
	a = create(MAX1);

	printf("\nEnter the Number of Elements for Array 2: ");
	scanf("%d", &MAX2);
	b = create(MAX2);

	printf("\nFirst Array: \n");
	disply(a, MAX1);
	printf("\nSecond Array; \n");
	disply(b, MAX2);

	free(a);
	free(b);
	return 0;
}

int *create(int size)
{
	int i;
	arr = (int *) malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		printf("Enter the Element no. [%d}: ", i+1);
		scanf("%d", &arr[i]);
	}
	return arr;
}

void disply(int *arr, int size)
{
	int i;
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
}
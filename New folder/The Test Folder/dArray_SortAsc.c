#include <stdio.h>
#include <stdlib.h>

int *arr;
int MAX1, MAX2;
int *create(int);
void display(int *, int);
void sort(int *, int);

int main(int argc, char const *argv[])
{
	int *a, *b;

	printf("Enter the Number of elements for Array 1: ");
	scanf("%d", &MAX1);
	printf("\nEnter the elements for the first array: \n");
	a = create(MAX1);

	printf("\nEnter the Number of Elements for Array 2: ");
	scanf("%d", &MAX2);
	printf("\nEnter the Elements for the Second array: \n");
	b = create(MAX2);

	sort(a, MAX1);
	sort(b, MAX2);

	printf("\nFirst Array Sorted: \n");
	display(a, MAX1);
	printf("\nSecond Array Sorted: \n");
	display(b, MAX2);

	free(a);
	free(b);
	return 0;
}

int *create(int size)
{
	int i;
	arr =(int *) malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		printf("Enter the Element no. [%d}; ", i+1);
		scanf("%d", &arr[i]);
	}
	return arr;
}

void display(int *arr, int size)
{
	int i;
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
}

void sort(int *arr, int size)
{
	int i, j, temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = aarr[j];
				arr[j] = temp;
			}
		}
	}
}
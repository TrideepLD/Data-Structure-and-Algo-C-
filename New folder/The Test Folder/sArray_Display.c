#include <stdio.h>
#define MAX 5

void display(int *);

void main()
{
	int arr[MAX] = {1, 2, 3, 4, 5};
	printf("%d\n", arr[0]);
	printf("%d\n", arr[0]);
	printf("\nElements of Array: \n");
	display(arr);
}

void display(int *arr)
{
	int i;
	for (int i = 0; i < MAX; i++)
	{
		printf("%d\t", arr[i]);
	}
}
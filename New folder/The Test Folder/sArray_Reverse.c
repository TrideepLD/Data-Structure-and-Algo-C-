#include <stdio.h>
#define MAX 5

void display(int *);
void insert(int *, int pos, int num);
void reverse(int *);
void main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	printf("\nElements of Array: ");
	display(arr);
	insert(arr, 1, 11);
	printf("\nElements of Array: ");	
	display(arr);
	insert(arr, 3, 322);
	printf("\nElements of Array: ");
	display(arr);

	reverse(arr);
	printf("\nAfter Reversing: ");
	display(arr);
}

void display(int *arr)
{
	int i;
	for (int i = 0; i < MAX; ++i)
	{
		printf("%d\t", arr[i]);
	}
}

void insert(int *arr, int pos, int num)
{
	int i;
	for (i = MAX - 1; i >= pos; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[i] = num;
}

void reverse(int *arr)
{
	int i, temp;
	for (int i = 0; i < MAX / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[MAX - 1 - i];
		arr[MAX - 1 - i] = temp;
	}
}
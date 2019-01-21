#include <stdio.h>
#include <stdlib.h>

int *arr;
int MAX1, MAx2;
int *create(int);
void display(int *, int);
void sort(int *, int);
int *merge(int *, int*);
void del(int *, int pos);
void sort2(int *, int);

int main(int argc, char const *argv[])
{
	int *a, *b, *c;
	int pos;

	printf("\nEnter the Number of Elements for Array 1: ");
	scanf("%d", &MAX1);
	printf("\nEnter the LEements for the First Array: \n");
	a = create(MAX1);

	printf("\nEnter the Number of Elements for Array 2: ");
	scanf("%d", &MAX2);
	printf("\nEnter the LEements for the Second Array: \n");
	b = create(MAX2);

	printf("\nFirst Array: \n");
	display(a, MAX1);
	printf("\nSecond Array: \n");
	display(b, MAX2);

	sort(a, MAX1);
	sort(b, MAX2);

	printf("\nFirst Array SOrted: \n");
	display(a, MAX1);
	printf("\nSecond Array sorted: \n");
	display(b, MAX2);

	c = merge(a, b);
	printf("\nMerging after Sorting a and b \n");
	display(c, MAX1 + MAX2);

	printf("\n\nSelecting the position that want to delete from the array: ");
	scanf("%d", &pos);
	del(c, pos);
	printf("\nArray after deleting element on position %d: \n", pos);
	display(c, MAX1 + MAX2);

	sort2(c, MAX1+MAX2);
	printf("\nMerged Array Sorted: \n");
	display(c, MAX1+MAX2);

	free(a);
	free(b);
	free(c);


	return 0;
}

int *create(int size){
	int i;
	arr =(int *) malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		printf("\nEnter the element no. [%d]: ", i+1);
		scanf("%d", &arr[i]);
	}
	return arr;
}

void display(int *arr, int size){
	int i, j, temp;
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
}

void sort(int *arr, int size){
	int i, j, temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void sort2(int *arr, int size){
	int i, j, temp;
	for (int i = size-1; i >= 0; i--)
	{
		for (int j = i-1; j >= 0; j--)
		{
			if (arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int *merge(int *a, int *b){
	int i, j;
	int size = MAX1 + MAX2;
	arr =(int *) malloc(sizeof(int) *(size));
	for (int i = 0; i < MAX1; i++)
	{
		arr[i]=a[i];
	}
	for (int i = MAX1, j=0; i < size, j<MAX2; i++, j++)
	{
		arr[i] = b[j];
	}
	return arr;
}

void del(int *arr, int pos){
	int i;
	for (int i = pos; i < MAX1+MAX2; i++)
	{
		arr[i - 1] = arr[i];
		arr[i - 1] - 0;
	}
}
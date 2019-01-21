#include <stdio.h>
#include <stdlib.h>

int *arr;
int MAX1, MAX2;
int *create(int);
void display(int *, int);
void insert(int *, int pos, int num);

int main()
{
	int *a, *b;
	
	printf("Enter the number of Elements for Array ONE: ");
	scanf("%d", &MAX1);
	printf("\nEnter the elements for the first array: \n");
	a = create(MAX1);
	
	printf("\nEnter the number of elemtns for Array TWO: ");
	scanf("%d", &MAX2);
	printf("\nEnter the elements for the second array: \n");
	b = create(MAX2);
	
	printf("\nFirst Array: \n");
	display(a, MAX1);
	printf("\nSecond Array: \n");
	display(b, MAX2);
	
	insert(a, MAX1);
	insert(b, MAX2);
	
	printf("\nElements of Array 1: \n");
	display(a, MAX1);
	printf("\nElements of Array 2: \n");
	display(b, MAX2);
	
	
	free(a);
	free(b);
	return 0; 
}

/* Creates Array of Given Size, Dynamically*/
int *create(int size)
{
	int i;
	arr =(int *) malloc(size * sizeof(int));
	
	for(i = 0; i < size; i++)
	{
		printf("enter the element no. [%d]: ", i + 1);
		scanf("%d", &arr[i]);
	}
	return arr;
}

/* Siplays the contents of the Array */
void display(int *arr, int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d\t", arr[i]);
	
}

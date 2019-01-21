#include <stdio.h>
#define MAX 5

void display (int *);

void main()
{
	int arr[MAX] = {1, 2, 3, 4, 5};
	printf ("\nElements of Array: \n");
	display(arr);
}

// Program to implement array
#include <stdio.h>
#define MAX 5

//Name:				Trideep Lal Das
//Matrix Number:	MC170103673

void display (int *);

void main()
{
	int arr[MAX] = {1, 2, 3, 4, 5};
	/* printf ("%d\n", arr[0]);
		printf ("%d\n", arr[4]); */
	printf ("\nElements of Array: \n");
	display(arr);
}

//display the contents of a array

void display (int *arr)
{
	//transverse the entire array
	int i;
	for (i = 0; i < MAX; i++)
		printf("%d\t", arr[i]);
	
}
//line 18 to 25 defines the funct
	

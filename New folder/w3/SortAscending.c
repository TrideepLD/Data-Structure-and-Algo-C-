#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int *arr;
int MAX1, MAX2;
int *create(int);
void display(int *, int);
void sort (int *, int);
void sortIns (int *, int);

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
	
	sort(a, MAX1);
	sort(b, MAX2);
	
	printf("\nFirst Array Sorted: \n");
	display(a, MAX1);
	printf("\nSecond Array Sorted: \n");
	display(b, MAX2);
	
	sortIns(a, MAX1);
	sortIns(b, MAX2);
	
	printf("\nFuck you: \n");
	display(a, MAX1);
	printf("\nSFUck you: \n");
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

/* Sorts the Array in Ascending oRder */
void sort(int *arr, int size)
{
	int i, j, temp;
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void sortIns(int *arr, int size)
{
 int i,j,tmp;
 for(i=0; i<size; i++)
 {
   for(j=i-1; j>=0; j--) 
   {
    if(arr[i]>arr[j+1])
    {
      tmp=arr[i];
      arr[i]=arr[j+1];
      arr[j+1]=tmp;
    }
   }
 }
}

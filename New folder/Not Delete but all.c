#include <stdio.h>
#include <stdlib.h>

int *arr;
int MAX1,MAX2;
int *create(int);
void display(int*, int);
void sort(int *, int);
int *merge(int*, int*);
void insert(int*, int pos, int num);
void del(int *, int pos);
void sort2(int *, int);

int main()
{
	int *a, *b, *c;
	int pos, num;
	
	printf("Enter the number of elements for Array One: ");
	scanf("%d", &MAX1);
	printf("\nEnter the elements for the first array: \n");
	a = create(MAX1);
	
	printf("\nEnter the number of elements for Array Two: ");
	scanf("%d", &MAX2);
	printf("\nEnter the elements for the second array: \n");
	b = create(MAX2);
	
	printf("\nFirst array: \n");
	display(a, MAX1);
	printf("\nSecond array: \n");
	display(b, MAX2);
	
	c = merge(a, b);
	printf("\nDisplay the merging two arrays\n");
	display(c, MAX1+MAX2);
	
	printf("\nArray after sort: \n");
	sort2(c, MAX1+MAX2);
	display(c, MAX1+MAX2);

	printf("\nSelect the position on the array: \n");
	scanf("%d", &pos);
	printf("\nInsert the value on the %d position : \n",pos);
	scanf("%d", &num);
	insert(c, pos, num);
	printf("\nArray after insert num: \n");
	display(c, MAX1+MAX2);
	
	printf("\n\nSelect the position that want to delete from the array: ");
	scanf("%d", &pos);
	del(c, pos);
	printf("\nArray after delete the postion %d: \n",pos);
	display(c, MAX1+MAX2);
	

	printf("\nArray after sort: \n");
	sort(c, MAX1+MAX2);
	display(c, MAX1+MAX2);
	
	free(a);
	free(b);
	free(c);
	return 0;
}
//Creates Array of Give Size, Dynamically
int *create(int size)
{
	int i;
	arr = (int *) malloc(size * sizeof(int));
		for(i=0; i<size; i ++)
	{
		printf("Enter the Element no. [%d]: ", i+1);
		scanf("%d", &arr[i]);
	}
	return arr;
}

//Displays the Contents of Array
void display(int *arr, int size)
{
	int i;
	for(i = 0; i < size; i++)
	printf("%d\t", arr[i]);
}

//Sorts Array in Ascending Order
void sort( int *arr, int size)
{
	int i, temp, j;
	for (i = 0; i< size; i++)
	{
		for( j = i +1; j < size; j++)
		
			if(arr[i] > arr[j])
			{
			
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			}
	}
}

//sort the array	
void sort2(int *arr, int size)
{
	int i, j, temp;
	for (i=size-1; i>=0; i--)
	{
		for (j=i-1; j>=0; j--)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

//Merges two Arrays of Different Size
int *merge(int *a, int *b)
{
	int i, j;
	int size = MAX1 + MAX2;
	arr = (int *) malloc(sizeof(int) * (size));
	for(i = 0; i < MAX1; i++)
	{
		arr[i] = a[i];
	}
	for(i=MAX1, j=0; i<size, j<MAX2; i++, j++)
	{
		arr[i] = b[j];
	}
	return arr;
}

void insert (int *arr, int pos, int num)
{
 //shift elements to right
 int i;
 for ( i = MAX1+MAX2 -1 ; i >= pos; i--)
 {
//printf("%d\t%d\n",arr[i], arr[i-1]);
 arr[i] = arr [i -1];
}
//fill up the number that we insert 
 arr[i] = num;

}
// deletes an element from the given position "pos"
void del(int *arr, int pos)
{
 // skip to the desired position
 int i;
 for(i = pos; i < MAX1+MAX2; i++)
 arr[i -1] = arr[i];
 arr[i - 1] = 0;
}

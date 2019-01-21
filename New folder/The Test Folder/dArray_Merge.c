#include <stdio.h>
#include <stdlib.h>

int *arr;
int MAX1, MAX2;
int *create(int);
void display(int *, int);
void sort(int *, int);
void *merge(int *, int *);

int int main(int argc, char const *argv[]) {
  int *a, *b, *c;

  printf("Enter the Number of Elemrnts for Array 1: ");
  scanf("%d", &MAX1);
  printf("\nEnter the elements for the first Array: \n");
  a = create(MAX1);

  printf("\nEnter the Number of Elements for Array 1: ");
  scanf("%d", &MAX2);
  printf("\nEnter the Elements for the Second Array: ");
  b = create(MAX2);

  printf("\nFirst Array: \n");
  display(a, MAX1);
  printf("\nSecond Array: \n");
  display(b, MAX2);

  sort(a, MAX1);
  sort(b, MAX2);

  printf("\nFirst Array Sorted: \n");
  display(a, MAX1);
  printf("\nSecond Arrry Sorted: \n");
  display(b, MAX2);

  c = merge(a, b);
  printf("\nDisplay the Merging two Arrays: \n");
  display(c, MAX1 + MAX2);


  free(a);
  free(b);
  free(c);
  return 0;
}

int *create(int size){
  int i;
  arr =(int *) malloc(size * sizeof(int));

  for (i = 0; i < size; i++) {
    printf("Enter the Element no. [%d]", i+1);
    scanf("%d", &arr[i]);
  }
  return arr;
}

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

int *merge(int *a, int *b)
{
	int i, j;
	int size = MAX1 + MAX2;
	arr =(int *) malloc(sizeof(int) *(size));
	for(i=0; i<MAX1; i++)
	{
		arr[i]=a[i];
	}
	for (i=MAX1, j=0; i<size , j<MAX2; i++, j++)
	{
		arr[i]=b[j];
	}
	return arr;
}

int *merge(int *a, int *b){
  int i, j;
  int size = MAX1 + MAX2;
  arr =(int *) malloc(sizeof(int) * (size));
  for (i = 0; i < MAX1; i++) {
    arr[i] = arr[j]
  }
  for (i = MAX1, j=0; i < size, j<MAX2; i++, j++) {
    arr[i] = b[j];
  }
  return arr;
}

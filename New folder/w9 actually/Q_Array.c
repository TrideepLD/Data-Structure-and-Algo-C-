 #include <stdio.h>

#define MAX 5

void addq(int *arr, int item, int *pfront, int *prear);
void delq(int *arr, int *pfront, int *prear);
void display(int *arr, int *pfront, int *prear);

int main()
{
	int arr[MAX];//Initializing Data Members
	
	int front = -1, rear = -1;
	display(arr, &front, &rear);
	
	delq(arr, &front, &rear);
	addq(arr, 33, &front, &rear);
	addq(arr, 333, &front, &rear);
	addq(arr, 3, &front, &rear);
	display(arr, &front, &rear);
	delq(arr, &front, &rear);
	display(arr, &front, &rear);
	addq(arr, 2, &front, &rear);
	addq(arr, 22222, &front, &rear);
	addq(arr, 2222, &front, &rear);
	addq(arr, 222, &front, &rear);
	addq(arr, 22, &front, &rear);
	display(arr, &front, &rear);
	delq(arr, &front, &rear);
	delq(arr, &front, &rear);
	display(arr, &front, &rear);
	delq(arr, &front, &rear);
	delq(arr, &front, &rear);
	display(arr, &front, &rear);
	addq(arr, 22, &front, &rear);
	display(arr, &front, &rear);

	return 0;
}

void addq(int *arr, int item, int *pfront, int *prear){
		if (*prear == MAX - 1)
		{
			printf("\nQueue Is Full");
			return;
		}
		(*prear)++;
		arr[*prear] = item;

		if (*pfront == -1)
			*pfront = 0;
}


void delq(int *arr, int *pfront, int *prear){
	int data;

	if (*pfront == -1)
	{
		printf("\nQueue is Empty");
		return;
	}

	data = arr[*pfront];
	arr[*pfront] = 0;
	if (*pfront == *prear)
		*pfront = *prear = -1;
	else
		(*pfront)++;
		printf("\nItem Deleted: %d", data);	
	

}

void display(int *arr, int *pfront, int *prear){
	int i;
	if (*pfront == -1){
		printf("\nQueue is Empty\n");
		return;
	}
	printf("\n\n ||| The Queue  |||\n");
	for (i = *pfront; i <= *prear; i++)
	{
		printf("%d\t", arr[i]);
	}
}


/*
***TRACING THIS CODE***
front = -1		rear = -1	Output Below

display(arr, -1, -1)	---> Queue is Empty
delq(arr, -1, -1)		---> Queue is Empty		
addq(arr, 33, -1, -1)	--->**Nothing displayed**
addq(arr, 333, 0, 0)	--->**Nothing displayed**
addq(arr, 3, 0, 1)		--->**Nothing displayed**
display(arr, 0, 1)		--->|||The Queue|||
							33	333	3
delq(arr, 0, 1);		--->Item Deleted: 33
display(arr, 1, 1);		--->|||The Queue|||
							333	3
addq(arr, 2, 1, 2);		
addq(arr, 22222, 1, 3);	
addq(arr, 2222, 1, 3);	--->Queue is Full
addq(arr, 222, 1, 4);	--->Queue is Full
addq(arr, 22, 1, 4);	--->Queue is Full
display(arr, 1, 4);		--->|||The Queue|||
							333	3	2	22222
delq(arr, 1, 4);			--->Item Deleted: 333
delq(arr, 2, 4);			--->Item Deleted: 3
display(arr, 3, 4);		--->|||The Queue|||
							2	22222
delq(arr, 3, 4);			--->Item Deleted: 2
delq(arr, 4, 4);			--->Item Deleted: 22222
display(arr, -1, -1);		--->Queue is Empty
addq(arr, 22, -1, -1);		
display(arr, 0, 0);			--->|||The Queue|||
							22

*/


#include <stdio.h>
//#include<conio.h>
#include <stdlib.h>
//structure containing a data part and link part
struct node
{
int data;
struct node *link;
};
void append(struct node **,int);
void display(struct node*);
void main()
{
struct node *p;
p = NULL; // empty linked list
display(p);
append(&p,14);
append(&p,30);
append(&p,25);
display(p);
append(&p,42);
append(&p,17);
display(p);
}
// adds a node at the end of a lnked list
void append(struct node **q, int num)
{
struct node *temp, *r;
	
if(*q == NULL)//if the list is empty, create first node
{
temp = malloc(sizeof(struct node));
temp -> data =num;
temp -> link = NULL;
*q = temp;
}
else
{
temp = *q;
//go to last node
while(temp->link != NULL)
temp = temp->link;
//add node at the end
r = malloc(sizeof(struct node));
r->data = num;
r->link = NULL;
temp -> link = r;
}
}
//display the contents of the linked list
void display(struct node *q)
{
	printf("\n");
	
	if(q == NULL)
	printf("The linked list is Empty!");
	else
	//traverse the entire linked list
	while(q != NULL)
	{
		printf("%d\n", q->data);
		q = q->link;
	}
}

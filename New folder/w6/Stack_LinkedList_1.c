#include <stdlib.h>
#include <stdio.h>


struct node
{
	int data;
	struct node *link;
};

void push(struct node **, int);
void pop(struct node **);
void delstack(struct node **);
void count(struct node *);
void display(struct node *);

int main()
{
	struct node *s = NULL;
	push(&s, 90);
	push(&s, -21);
	push(&s, 2);
	pop(&s);
	count(s);
	display(s);
	push(&s, 2);
	push(&s, 22);
	push(&s, 322);
	printf("\n");
	count(s);
	delstack(&s);
	count(s);
	display(s);


	return 0;
}

void push(struct node **pu, int data)
{
	struct node *tmp;
	tmp = (struct node*) malloc(sizeof(struct node));
	if(tmp == NULL)
    {
        printf("\nxzxcvbnm,nbvcxzZxcvbnmnbvcxz\n");
    }
    tmp->data = data;
    tmp->link = *pu;
    *pu = tmp;
    printf("This item %d has been added into the stack\n", data);
};

void pop(struct node **pu)
{
    struct node* tmp = *pu;
    int item;
    
    if (*pu == NULL)
    {
    	printf("\nStack is empty");
    	return;
    }

    item = tmp->data;
    *pu = (*pu)->link;
	printf("\n%d Deleted\n\n", item);
    free(tmp);
}

void delstack(struct node **pu)
{
	struct node* tmp;
	int item;
	
	if(*pu == NULL)
	return;
	
	do
	{
	tmp = *pu;
    *pu = tmp->link;
    free(tmp);
	} while (*pu != NULL);
}

void count(struct node *pu)
{
	int i = 0;
	while(pu !=NULL)
	{
		pu = pu->link;
		i++;
	}
	printf("There are %d no. of things in the list.\n", i);
}

void display(struct node *pu)
{
    struct node *tmp;
    int item;
    tmp = pu;
    if(tmp!= NULL)
    {
		
        printf("\nIn there stacks there are:");
        
        do
        {
        	tmp->data;
            item = tmp->data;
            tmp = tmp->link;
            printf("%d\t", item);
        }
        while (tmp!= NULL);
        printf("\n\n");
        return;
	}
		printf("\nThe Stack is empty\n");

        
 
}

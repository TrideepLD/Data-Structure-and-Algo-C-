#include <stdio.h>
#define MAX 2

struct stack
{
	int arr[MAX];
	int top;
};

void initstack(struct stack *);
void push(struct stack *, int item);
void pop(struct stack *);

int main()
{
	struct stack s;
	int i;

	initstack(&s);
	push(&s, 90);
	push(&s, -21);
	push(&s, 2);
	pop(&s);

	return 0;
}

// Initializess the Stack
void initstack(struct stack *s){
	s->top = -1;
}

void push(struct stack *s, int item){
	if (s->top >= MAX - 1)
	{
		printf("\nStack is full, the Item %d cannot be added \n",  item);
		return;
	}
	s->top++;
	s->arr[s->top] = item;
	printf("This item %d has been added into the stack\n", item);
}

void pop(struct stack *s){
	if (s -> top == -1)
	{
		printf("Stack is empty. \n");
		return;
	}
		printf("The item pople: %d\n", s->arr[s -> top]);
		s->top--;
}

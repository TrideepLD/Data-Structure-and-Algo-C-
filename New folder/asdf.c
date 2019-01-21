#include <stdio.h>
void main()
{
	int x = 1;
	double y = 2.2;
	char z = 'a';
	
	printf("The address of x is: %u\n", &x);
	printf("The value of x is: %d\n", x);
	
	printf("The address if y is: %u\n", &y);
	printf("The value of x is: %.2f\n", y);
	
	printf("The address of z is: %u\n", &z);
	printf("The value of z is: %c\n\n", z);
	
	
	int *a;
	double *b;
	char *c;
	
	a = &x;
	b = &y;
	c = &z;
	
	*a = *a+2;
	
	printf("The address of a is: %u\n", a);
	printf("The value of a is: %d\n", *a);
	
	printf("The address of b is: %u\n", b);
	printf("The value of b is: %.2f\n", *b);
	
	printf("The address of c is: %u\n", c);
	printf("The value of c is: %c\n\n", *c);
	
	int test[5] = {10, 23, 89, 108, 45};
	int i;
	for	(i=0; i<5; i++)
	{
		printf("Test[%d] \t %u \t %d\n", i, &test[i], test[i]);
	}
	printf("%u\n",  test);
	printf("%d\n", *test);
	printf("%d\n", &test);
	printf("%u\n\n", &test);
	printf("%d\n", *(test+2));
	printf("%u\n", (test+2));
}

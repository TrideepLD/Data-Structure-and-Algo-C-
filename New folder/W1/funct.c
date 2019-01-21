#include <stdio.h>

void Hello();
int Multiply(int , int );
int Add(int , int );
int Sub(int , int );
double Div(double , double );

void main()
{
	Hello();
	printf("\n%d", Multiply(2,3));
	printf("\n%d", Add(4,3));
	printf("\n%d", Sub(4,3));
	printf("\n%.2f", Div(8,3));
}

void Hello()
{
	printf("Hello");
}

int Multiply(int x, int y)
{
	return x*y;
}
int Add(int x, int y)
{
	return x+y;
}
int Sub(int x, int y)
{
	return x-y;
}
double Div(double x, double y)
{
	return x/y;
}

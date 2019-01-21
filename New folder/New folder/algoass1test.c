#include <stdio.h>
#include <string.h>
 
struct a {
   char  	occupation_title[50];
   int   	employee_number;
   float  	mean_hourwage, annual_meanwage;
  
};

/* function declaration */
void table1( struct a b );

int main( ) {

   struct a b;        

   strcpy(b.occupation_title, "Management Occupations");
   b.employee_number =907690;
   b.mean_hourwage =61.02;
   b.annual_meanwage =126.920;

   
  
   printTable( b );

   return 0;
}

void printTable( struct a b ) {

   printf( "Occupation title :%s\t", b.occupation_title);
   printf( "Employment Number :%d\t", b.employee_number);
   printf( "Mean Hourly wage :%.2f \t", b.mean_hourwage);
   printf( "Annual Mean Wage :%.2f\t", b.annual_meanwage);
}




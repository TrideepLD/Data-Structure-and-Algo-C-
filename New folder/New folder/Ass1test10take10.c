#include <stdio.h>
#include <string.h>
#include <conio.h>
 
struct Table {
   char  	occupation_title[50];
   int   	employee_number;
   float  	mean_hourwage, annual_meanwage;
  
};

void sort (struct Table table [], int s);
void sortIns (struct Table table [], int s);
void table1( struct Table table );
void display( struct Table table []);

int main( ) {

   struct Table table[20];        

   strcpy(table[0].occupation_title, "MO");
   table[0].employee_number =907690;
   table[0].mean_hourwage =61.02;
   table[0].annual_meanwage =126.920;
   
   strcpy(table[1].occupation_title, "CE");
   table[1].employee_number =31720;
   table[1].mean_hourwage =98.18;
   table[1].annual_meanwage =204.220;
   
   strcpy(table[2].occupation_title, "G&OM");
   table[2].employee_number =268060;
   table[2].mean_hourwage =61.78;
   table[2].annual_meanwage =128.510 ;
   
   strcpy(table[3].occupation_title, "A&PM");
   table[3].employee_number =31720;
   table[3].mean_hourwage =53.70;
   table[3].annual_meanwage =204.220;
   
   strcpy(table[4].occupation_title, "MM");
   table[4].employee_number =32800;
   table[4].mean_hourwage =77.71;
   table[4].annual_meanwage =161.640 ;
   
   strcpy(table[5].occupation_title, "SM");
   table[5].employee_number =66200;
   table[5].mean_hourwage =62.65;
   table[5].annual_meanwage =130.310;
   
   strcpy(table[6].occupation_title, "PR&FM");
   table[6].employee_number = 6660;
   table[6].mean_hourwage =61.63;
   table[6].annual_meanwage =128.190;
   
   strcpy(table[7].occupation_title, "ASM");
   table[7].employee_number =40940;
   table[7].mean_hourwage =48.37;
   table[7].annual_meanwage =100.610;
   
   strcpy(table[8].occupation_title, "CISM");
   table[8].employee_number =50440;
   table[8].mean_hourwage =78.99 ;
   table[8].annual_meanwage =164.290;
   
   strcpy(table[9].occupation_title, "FM");
   table[9].employee_number =72060;
   table[9].mean_hourwage =70.50 ;
   table[9].annual_meanwage =146.630;
   
   strcpy(table[10].occupation_title, "IPM");
   table[10].employee_number =19240;
   table[10].mean_hourwage =53.36;
   table[10].annual_meanwage =110.990;
   
   strcpy(table[11].occupation_title, "PM");
   table[11].employee_number =8580;
   table[11].mean_hourwage =56.56 ;
   table[11].annual_meanwage =117,640;
   
   strcpy(table[12].occupation_title, "TS&DM");
   table[12].employee_number =14590;
   table[12].mean_hourwage =46.96;
   table[12].annual_meanwage =97.680;
   
   strcpy(table[13].occupation_title, "C&BM");
   table[13].employee_number =1640;
   table[13].mean_hourwage =63.25;
   table[13].annual_meanwage =131,560;
   
   strcpy(table[14].occupation_title, "HRM");
   table[14].employee_number =15660;
   table[14].mean_hourwage =63.25;
   table[14].annual_meanwage =131.560 ;
   
   strcpy(table[15].occupation_title, "T&DM");
   table[15].employee_number =3150;
   table[15].mean_hourwage =62.93;
   table[15].annual_meanwage =130.890;
     
   strcpy(table[16].occupation_title, "FR&OAM");
   table[16].employee_number =1080;
   table[16].mean_hourwage =36.41;
   table[16].annual_meanwage =75.730;
   
   strcpy(table[17].occupation_title, "CM");
   table[17].employee_number =29950;
   table[17].mean_hourwage =52.04;
   table[17].annual_meanwage =108.240;
   
   strcpy(table[18].occupation_title, "EA");
   table[18].employee_number =7230;
   table[18].mean_hourwage =28.22 ;
   table[18].annual_meanwage =58.700;
   
   strcpy(table[19].occupation_title, "A&EM");
   table[19].employee_number =30380;
   table[19].mean_hourwage =79.71;
   table[19].annual_meanwage =165.80000;
   
   sort(table, 20);   
   display(table);
   printf("\n\nFUCKYOU\n\n");
   sortIns(table, 20);
   display(table);

}


void display(struct Table table[20])
{
	int i;
 
	 printf( "Occupation title \t Employment Number \t Mean Hourly wage \t Annual Mean Wage \t");
	 for (i =0; i<20; i++)
	 {
	 	printf( "\n%s\t\t\t %d\t\t\t %.2f\t\t\t %.2f\t\t\t",table[i].occupation_title, table[i].employee_number, table[i].mean_hourwage, table[i].annual_meanwage);
	 }
	 

	
}

void sort(struct Table table [], int s)
{
	int i, j;
	struct Table temp;
	for(i = 0; i < s; i++)
	{
		for(j = i + 1; j < s; j++)
		{
			if(table[i].employee_number > table[j].employee_number)
			{
				temp = table[i];
				table[i] = table[j];
				table[j] = temp;
			}
		}
	}
}
void sortIns(struct Table table [], int s)
{
 int i, j;
 struct Table temp;
 for(i = 0; i < s; i++)
 {
   for(j = i - 1; j >= 20; j--) 
   {
    if(table[i].employee_number > table[j+1].employee_number)
    {
      temp=table[i];
      table[i]=table[j+1];
      table[j+1]=temp;
    }
   }
 }
}

//Convert an decimal to its binary equivalent using a bitwise operator

i#include<stdio.h>

#include<conio.h>

 

void binary(unsigned int);   

 

void main()

{

unsigned int num;
 
printf("Enter Decimal Number : ");

scanf("%u",&num);

binary(num);   

getch();

}


void binary(unsigned int num)

{

unsigned int mask=32768;   
printf("Binary Eqivalent : ");

 

while(mask > 0)

   {

   if((num & mask) == 0 )

         printf("0");

   else

         printf("1");

  mask = mask >> 1 ;  
   }

}

//Write a C code to find the type of array
//If all elements in the array are odd it is known as "ODD ARRAY"
//if all elements in the array are even it is known as "EVEN ARRAY"
//if both even and odd available it is known as MIXED array

#include<stdio.h>
int findType(int n, int *ary) //complete this function
{
  int counte=0,counto=0,i;
  for(i=0;i<n;i++)
  {
  	if(ary[i]%2==0)
  	{
  		counte=counte+1;
    }
	else
	{
		counto=counto+1;
	}  
  }
  if(counte==n)
  {
  	printf("Even Array!");
  }
  else if(counto==n)
  {
  	printf("Odd Array!");
  }
  else
  {
  	printf("Mixed Array!");
  }
}
int main()
{
   int i,ary1[20],k;
   printf("Enter Number of elements: ");
   scanf("%d",&i);
   for(k=0;k<i;k++)
   {
   	scanf("%d",&ary1[k]);
   }
   findType(i,ary1);
  return 0;
}


//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.
#include<stdio.h>
int main()
{
	int i,posi=0,nega=0,n,k;
	printf("Enter a number of inputs: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		if(k>0)
		{
			posi=posi+1;
		}
		else
		{
			nega=nega+1;
		}
	}
	printf("Number of positive number are: %d\n",posi);
	printf("Number of negative number are: %d",nega);
}

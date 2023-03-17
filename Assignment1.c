//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.
#include<stdio.h>
int main()
{
	int i,cnt=0;
	printf("Enter a number: ");
	scanf("%d",&i);
	while(i%8==0)
	{
		scanf("%d",&i);
		cnt=cnt+1;
	}
	printf("%d",cnt);
}

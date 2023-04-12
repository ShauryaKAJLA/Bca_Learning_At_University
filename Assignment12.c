//Input marks of 10 students in an array and then find the student with maximum marks
#include<stdio.h>
int main()
{
	int i,ary[50],j,greater,fl=0;
	printf("Enter number of elements: ");
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		scanf("%d",&ary[j]);
	}
	greater=ary[0];
	for(j=1;j<i;j++)
	{
		if(ary[j]>greater)
		{
			greater=ary[j];
			fl=j;
		}
	}
	printf("Student %d got higest marks: %d",++fl,greater);
}

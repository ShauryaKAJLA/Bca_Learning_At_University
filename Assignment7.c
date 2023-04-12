//Write a code find the length of a string and its reverse equivalent without using readymade c functions
#include<stdio.h>
#include<string.h>
int main()
{
	int i,len=0,j;
	char str[50];
	char ch;
	printf("Enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	j=len-1;
	for(i=0;i<len/2;i++)
	{
		ch=str[j];
		str[j]=str[i];
		str[i]=ch;
		j--;
	}
	puts(str);
}

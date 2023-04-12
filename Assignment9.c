//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1
#include<stdio.h>
#include<string.h>
int main()
{
	int count,i;
	char str[50],ch,ch1;
	printf("Enter a string: ");
	gets(str);
	for(ch='A',ch1='a';ch<='Z';ch1++,ch++)
	{
		count=0;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]==ch)
			{
				count=count+1;
			}
		}
		if(count>0)
		{
			printf("%c: %d\n",ch,count);
		}
		count=0;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]==ch1)
			{
				count=count+1;
			}
		}
		if(count>0)
		{
			printf("%c: %d\n",ch1,count);
		}
	}
}

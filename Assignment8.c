//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

#include<stdio.h>
#include<string.h>
int main()
{
	int i,len=0,j=0,fl=0,o,count;
	char str[50];
	char ch1='A',ch2='a',sm;
	printf("Enter a string: ");
	gets(str);
	for(;ch1<='Z';ch1++)
	{
		for(i=j;str[i]!='\0';i++)
		{
	     if(ch1==str[i]||ch2==str[i])
	      {
	    	fl=i;
	    	sm=str[i];
	    	for(o=fl;o>=j;o--)
	    	{
	    		str[o]=str[o-1];
			}
			str[j]=sm;
			j++;
		  }
	    }
	    ch2++;
	}
	puts(str);
}

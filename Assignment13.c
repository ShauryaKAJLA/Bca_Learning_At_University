//Design a basic calculator in C. It must be a menu driven program
//Press 1 for addition
//Press 2 for substraction
//Press 3 for multiplication
//Press 4 for division

//after showing result the main menu should appear again.

#include<stdio.h>
float add(float x,float y);
float sub(float x,float y);
float multi(float x,float y);
float div(float x,float y);
float main()
{
	int i,choice;
	float a,b,res;
	do
	{
		printf("What do you want to do!\n");
		printf("1-SUM\n2-SUBTRACT\n3-MULTIPLICATION\n4-DIVISION\n5-Leave\n");
		printf("Enter your choice here: ");
		scanf("%d",&choice);
		if(choice==5)
		{
			break;
		}
		else
		{
			printf("Enter number 1: ");
			scanf("%f",&a);
			printf("Enter number 2: ");
			scanf("%f",&b);
			switch(choice)
			{
				case 1:
					res=add(a,b);
					break;
				case 2:
					res=sub(a,b);
					break;
				case 3:
					res=multi(a,b);
					break;
				case 4:
					res=div(a,b);
					break;
				default:
				    printf("Wrong Choice! ");
					break;	
		    }
		    printf("Result : %.1f\n",res);
		}
	}
	while(1);
}
float add(float x,float y)
{
	return x+y;
}
float sub(float x,float y)
{
	return x-y;
}
float multi(float x,float y)
{
	return x*y;
}
float div(float x,float y)
{
	return x/y;
}

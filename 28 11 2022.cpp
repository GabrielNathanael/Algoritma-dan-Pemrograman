#include <stdio.h>

int program,number;

int main()
{
	printf("List Program : \n");
	printf("1.Check your integer are Multiples of 3 and 4 \n");
	printf("2.Check your integer is negative number and even \n");
	printf("Choose program 1 or program 2 (1 or 2) : ");
	scanf("%i", &program);
	
	if(program == 1)
	{
		printf("Insert number : ");
		scanf("%i",&number);
		
		if((number %3 == 0) && (number %4 == 0))
		{
			printf("Correct number :) ");
	    }
	    else
	    {
	    	printf("Wrong number :( ");
		}
	}
	
	if(program == 2)
	{
		printf("Insert number : ");
		scanf("%i",&number);
		
		if((number <0) && (number %2 == 0))
		{
			printf("Correct number :) ");
		}
		else
		{
			printf("Wrong number :( ");
		}
	}
	
	if(program != 1 && program != 2)
	{
		printf("Sorry,you put wrong input :) ");
	}
	
	return 0;
}
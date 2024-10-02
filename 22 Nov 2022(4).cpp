#include <stdio.h>

int result;
int main()
{

	printf("Please input Number : ");
	scanf("%i", &result);
	 
	if((result % 3 == 0) && (result % 6 != 0))
	{
	
	printf("Nice");
 	}
 	else
 		printf("Nope");
	
	          

	
	return 0;
}
	
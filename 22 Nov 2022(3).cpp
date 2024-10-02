#include <stdio.h>
int main()
{

int result;

	printf("Please input Number : ");
	scanf("%i", &result);
	

    if(((result <10)||(result >20))&&(result % 2 == 0))
    {
        printf("Nice", result);
	}
    else
        printf("Nope", result);
    
    return 0;
}
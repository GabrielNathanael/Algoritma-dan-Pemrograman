#include <stdio.h>
int main()
 {
int A,B,C;
int result;

	printf("Please input Number : ");
	scanf("%i", &A);
	printf("Please input Number : ");
	scanf("%i" , &B);
	printf("Please input Number : ");
	scanf("%i", &C);
    printf("Total %i * %i / %i = %i\n",A,B,C,A*B/C);
    result = A*B/C;


    if(result % 2 == 0)
    {
        printf("%i is even.", result);
	}
    else
        printf("%i is odd.", result);
    
    return 0;
}
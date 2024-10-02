#include "stdio.h"
int main()
{
	
	
	int i,input,total,z;
	float avg,inputL;
	
	printf("insert how many data you want input: ");
	scanf("%i",&input);
	total = 0;
	for(z=1;z<=input;z++)
	{
		printf("Masukkan nilai ke %i : ", z);
        scanf("%i", &i);
       
        total = total + i;
 	}
 	inputL=input;
 	avg=  total/input;

    printf("average : %f",avg);

	return 0;
}
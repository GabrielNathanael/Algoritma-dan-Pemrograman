#include <stdio.h>

int x,banyak, i, total;
float Output, banyakakhir;

int main()
{
	total = 0;
	
	printf("Input how many number you want to input: ");
	scanf("%i", &banyak);
	
	for(x = 1; x <= banyak; x++){
		printf("Input integer number %i : ", x);
		scanf("%i", &i);
		total = total + i;
	}
	banyakakhir = banyak;
	Output = total / banyakakhir;
	
	printf("The average of number is : %f", Output);
	
	return 0;
}
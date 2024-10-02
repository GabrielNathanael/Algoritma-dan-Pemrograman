#include "stdio.h"

int a,b,c,d,e,f,g,h,i,j,genap,ganjil,input;

int main()
{
	printf("Masukkan 10 bilangan bulat: ");
	scanf("%i,%i,%i,%i,%i,%i,%i,%i,%i,%i",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	
	input = a,b,c,d,e,f,g,h,i,j;
  	genap = input %2 == 0;
  	ganjil = input %2 == 1;

  	if (ganjil > genap)
	{
		printf("banyak bilangan ganjil lebih banyak");
	}
	else if (ganjil < genap)
	{
		printf("banyak bilangan genap lebih banyak");
	}


	
	return 0;	
}
#include "stdio.h"

float a,b,c;

int main()
{
	printf("masukkan masing-masing panjang garis(masukkan seperti ini a,b,c):");
	
  	scanf("%f, %f, %f", &a, &b, &c);

		
	if((a<= 0) || (b<= 0) || (c<=0))
	{
		printf("Tolong,jangan memasukkan bilangan negatif atau angka 0");
	}
	
	else if( a+b>=c && a+c>=b && b+c>=a)
	{
		printf("nilai yang kamu input dapat membentuk segitiga");
	}
	else
	{
		printf("nilai yang kamu input tidak dapat membentuk segitiga");
	}
	
	

	return 0;
}
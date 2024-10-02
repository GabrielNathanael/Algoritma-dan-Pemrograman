#include "stdio.h"

float x,y,hasil;


int main()
{
	printf("Masukkan kordinat x : ");
	scanf("%f",&x);
	printf("Masukkan kordinat y : ");
	scanf("%f",&y);
	printf("Hasil = %f\n",x,y,y-x/2-1);
	hasil = y-x/2-1;
	
	
	if(hasil ==0 )
	{
		printf("kordinat sejajar dengan garis");
	}
	if(hasil >0)
	{
		printf("kordinat diatas garis");
	}
	if(hasil <0)
	{
		printf("kordinat dibawah garis");
	}
	
	
	return 0;
}

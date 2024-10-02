#include <stdio.h>

int selisih(int a, int b, int* hasil )
{
	
	if(a > b)
	{
		*hasil = a-b;
		return *hasil;
	}
	else 
	{
		*hasil = b-a;
		return *hasil;
	}
}

int beda, angka1, angka2;

int main()
{
	printf("Masukkan angka pertama : ");
	scanf("%i", &angka1);
	
	printf("masukkan angka kedua : ");
	scanf("%i", &angka2);
	
	beda = selisih(angka1, angka2, &beda);
	
	printf("Selisih adalah : %i", beda);
	
}
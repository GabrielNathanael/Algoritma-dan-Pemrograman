#include "stdio.h"

int Tambah(int a, int b)
{
	return(a+b);
}

int Kurang(int a, int b)
{
	return(a-b);
}

int Kali(int a, int b)
{
	return(a*b);
}

bool BagiBulat(int a, int b, int* h, int* s)
{
	if (b==0)
	{
		return(false);
	}
	else
	{
		*h = a/b;
		*s = a%b;
		return(true);
	}
}

int Selisih(int a, int b)
{
	if (a>=b)
	{
		return(a-b);
	}
	else
	{
		return(b-a);
	}
}

void TampilkanMenu()
{
	printf("Menu.\n");
	printf("1. Penjumlahann\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian bulat\n");
	printf("5. Mendapatkan selisih\n");
	return;
}

int PilihMenu()
{
	int pilihan;
	TampilkanMenu();
	printf("Silahkan pilih menu dengan meng-input nomor menu item-nya: ");
	scanf("%i", &pilihan);
	return(pilihan);
}

void DapatkanInput(int* a, int* b)
{
	printf("Masukkan bilangan pertama: ");
	scanf("%i", a);
	printf("Masukkan bilangan kedua: ");
	scanf("%i", b);
	return;
}

int menuItemPilihan;
int bil1, bil2, hasilBagi, sisaBagi;

int main()
{
	menuItemPilihan = PilihMenu();
	DapatkanInput(&bil1, &bil2);
	switch(menuItemPilihan)
	{
		case 1:
			{
				printf("%i + %i = %i", bil1, bil2, Tambah(bil1, bil2));
				break;
			}
		case 2:
			{
				printf("%i - %i = %i", bil1, bil2, Kurang(bil1, bil2));
				break;
			}
		case 3:
			{
				printf("%i x %i = %i", bil1, bil2, Kali(bil1, bil2));
				break;
			}
		case 4:
			{
				if(BagiBulat(bil1, bil2, &hasilBagi, &sisaBagi))				
				{   
					printf("%i / %i = %i sisa %i", bil1, bil2, hasilBagi, sisaBagi);
				}
				else
				{
					printf("Pembagian gagal dilakukan.");
				}
				break;
			}
		case 5:
			{
				printf("Selisih antara %i dan %i adalah %i", bil1, bil2, Selisih(bil1, bil2));
				break;
			}
		default:
			{
				printf("Maaf, pilihan anda tidak ada di daftar menu.");
			}
	}
	return(0);
}
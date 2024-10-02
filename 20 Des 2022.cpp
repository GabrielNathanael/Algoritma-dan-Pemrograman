#include <stdio.h>

int main() {
    int i, number;
    int even=0;
    int odd=0;
    printf("masukkan 10 integer secara acak\n");
    for(i=0;i<10;i++)
	{
        scanf("%d", &number);
        if (number%2==0)
		{
            even++;
        }
		else{
            odd++;
        }
    }
    if (odd>even)
	{
            printf("Bilangan ganjil lebih banyak daripada genap");
        } 
		else if (even>odd) 
		{
            printf("Bilangan genap lebih banyak daripada ganjil");
        }
		else
		 {
            printf("Bilangan ganjil sama dengan bilangan genap");
        }
}
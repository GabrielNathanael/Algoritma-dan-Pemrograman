#include "stdio.h"

int main(){
	
	const int jmlBaris = 2;
	const int jmlKolom = 3;
	
	int baris,kolom,matrix[jmlBaris][jmlKolom];
	printf("Input matrix berukuran %i x %i:\n",jmlBaris,jmlKolom);
	for(baris=0;baris<jmlBaris;baris=baris+1){
		printf("Baris ke -%i:",baris+1);
		scanf("%i",&(matrix[baris][kolom]));
		
		for (kolom=0;kolom<jmlKolom;kolom=kolom+1)
		{
			
			printf("Kolom ke -%i: ",kolom+1);
			scanf("%i",&(matrix[baris][kolom]));
			
		}
	}
	printf("\nmatrix yang anda masukkan sebagai berikut: \n");
	for(baris=0;baris<jmlBaris;baris=baris+1){
		for (kolom=0;kolom<jmlKolom;kolom=kolom+1){
			printf("%i\t",matrix[baris][kolom]);
		}
		printf("\n");
	}
		

	return 0;
}


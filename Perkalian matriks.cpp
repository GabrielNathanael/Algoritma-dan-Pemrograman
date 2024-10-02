#include <stdio.h>

using namespace std;

int main(){
	int matriks1[3][3], matriks2[3][3], hasil[3][3];
   int i, j, k;
   
  
   printf("Masukkan isi matriks pertama:\n");
   for(i=0; i<3; i++) {
      for(j=0; j<3; j++) {
         scanf("%d", &matriks1[i][j]);
      }
   }
   

   printf("Masukkan isi matriks kedua:\n");
   for(i=0; i<3; i++) {
      for(j=0; j<3; j++) {
         scanf("%d", &matriks2[i][j]);
      }
   }
   
   // Perkalian 
   for(i=0; i<3; i++) {
      for(j=0; j<3; j++) {
         hasil[i][j] = 0;
         for(k=0; k<3; k++) {
            hasil[i][j] += matriks1[i][k] * matriks2[k][j];
         }
      }
   }
   
 
   printf("\nHasil perkalian matriks:\n");
   for(i=0; i<3; i++) {
      for(j=0; j<3; j++) {
         printf("%d\t", hasil[i][j]);
      }
      printf("\n");
   }


	return 0;
}

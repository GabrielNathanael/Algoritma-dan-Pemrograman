#include <stdio.h>

// Fungsi untuk menghitung invers matriks 3x3
void inverseMatrix(float matrix[3][3], float inverse[3][3]) {
    float determinant = 0;

    // Menghitung determinan matriks
    for (int i = 0; i < 3; i++)
        determinant += (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));

    // Menghitung matriks adjoin
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inverse[j][i] = ((matrix[(i + 1) % 3][(j + 1) % 3] * matrix[(i + 2) % 3][(j + 2) % 3]) -
                             (matrix[(i + 1) % 3][(j + 2) % 3] * matrix[(i + 2) % 3][(j + 1) % 3])) / determinant;
        }
    }
}

// Fungsi untuk mencetak matriks
void printMatrix(float matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matrix[3][3];
    float inverse[3][3];

    // Menerima input dari pengguna
    printf("Masukkan elemen matriks 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    // Menghitung invers matriks
    inverseMatrix(matrix, inverse);

    // Mencetak matriks invers
    printf("\nMatriks invers:\n");
    printMatrix(inverse);

    return 0;
}
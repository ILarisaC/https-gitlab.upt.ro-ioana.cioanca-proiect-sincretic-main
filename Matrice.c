include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5 // Dimensiunea M a matricei
#define N 5 // Dimensiunea N a matricei

void generareMatrice(int matrice[M][N]) {
    // Generarea unei matrici aleatoare
    srand(time(NULL));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrice[i][j] = rand() % 100; // Valorile sunt generate între 0 și 99
        }
    }
}

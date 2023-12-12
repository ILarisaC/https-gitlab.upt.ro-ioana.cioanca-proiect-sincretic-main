include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10


//functie de generare a unei matrici
void generareMatrice(int matrice[MAX][MAX], int n) {
    int i, j;
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            matrice[i][j] = rand() % 100; // Valorile sunt generate între 0 și 99
        }
    }
}

void afisareMatrice(int matrice[MAX][MAX], int n){
    int i, j;
    for(i=0;i<n;i++){
        printf("%d ", matrice[i][j]);
    }
    printf("\n");
}

int sumaDiagonalaPrincipala(int matrice[MAX][MAX], int n){
    int i, suma = 0;
    for(i=0;i<n;i++){
        suma +=matrice[i][j];
    }
    return suma;
}

int sumaDiagonalaSecundara(int matrice[MAX][MAX], int n){
    int i, suma=0;
    for(i=0;i<n;i++){
        suma +=matrice[i][n-1-i];
    }
    return suma;
}






int main(){
    int matrice[MAX][MAX],n;
    //set nr aleatoare
    srand(time(NULL));

    //citirea dimensiunii matricei
    printf("Introduceti dimensiunea matricei (max %d): ", MAX);
    scanf("%d", &n);

    //generarea aleatorie a elemntelor matricei
    generareaMatrice(matrice, n);
    //afisarea matricei generate aleator
    printf("Matricea generata aleator este:\n");
    afisareMatrice(matrice, n);

    //Afisarea matricei generate aleator
    printf("Matricea generata aleator este:\n");
    afisareMatrice(matrice, n);

    //Afisarea rezultatelor
    printf("Suma elementelor de pe diagonala principala: %d\n", sumaDiagonalaPrincipala(matrice, n));
    printf("Suma elementelor de pe diagonala secundara: %d\n", sumaDiagonalaSecundara(matrice, n));
    printf("Maxim sub diagonala principala: %d\n", maximSubDiagonalaPrincipala(matrice, n));
    printf("Minim sub diagonala principala: %d\n", minimSubDiagonalaPrincipala(matrice, n));
    printf("Maxim sub diagonala secundara: %d\n", maximSubDiagonalaSecundara(matrice, n));
    printf("Minim sub diagonala secundara: %d\n", minimSubDiagonalaSecundara(matrice, n));



    return 0;
}  


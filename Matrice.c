#include <stdio.h>
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

int maximSubDiagonalaPrincipala(int matrice[MAX][MAX], int n){
    int i, j, maxim=matrice[1][0];
    for(i=2;i<n;i++){
        for(matrice[i][j]>maxim){
            maxim=matrice[i][j];
        }
    }
    return maxim;
}

int minimSubDiagonalaPrincipala(int matrice[MAX][MAX], int n){
    int i, j, minim=matrice[1][0];
    for(i=2;i<n;i++){
        for(matrice[i][j]<mainim){
            minim=matrice[i][j];
        }
    }
    return minim;
}

int maximSubDiagonalaSecundara(int matrice[MAX][MAX], int n){
    int i, j, maxim=matrice[1][n-2];
    for(i=2;i<n;i++){
        for(j=n-1;j<n-1;j++){
            if(matrice[i][j]>maxim){
                maxim=matrice[i][j];
            }
        }
    }
    return maxim;
}

int minimSubDiagonalaSecundara(int matrice[MAX][MAX], int n){
    int i, j, minim=matrice[1][n-2]; ///initializare primul element sub diagonala
    for(i=2;i<n;i++){
        for(j=n-1;j<n-1;j++){
            if(matrice[i][j]>minim){
                minim=matrice[i][j];
            }
        }
    }
    return minim;
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


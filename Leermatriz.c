#include <stdio.h>

#define col 3
#define fil 3

void lecturaMatriz(int n, int m, int matriz[n][m]);

void sumaMatriz(int n, int m, int matriz1[n][m],int matriz2[n][m],int matriz3[n][m]);

void lecturaMatriz(int n, int m, int matriz[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Ingrese el numero en la posicion %d,%d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}

void sumaMatriz(int n, int m, int matriz1[n][m],int matriz2[n][m],int matriz3[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}


int main(void){
    int matrizA[fil][col];
    int matrizB[fil][col];
    int suma[fil][col];

    printf("Matriz A: \n");
    lecturaMatriz(fil, col, matrizA);
    printf("Matriz B: \n");
    lecturaMatriz(fil, col, matrizB);
    sumaMatriz(fil, col, matrizA, matrizB, suma);

    printf("\nMatriz suma: \n");

    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            printf("%d ",suma[i][j]);
            if(j==col-1){
                printf("\n");
            }
        }
    }    
    
    /*printf("Matriz A:\n");
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            printf("Ingrese el numero en la posicion %d,%d: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    }

    printf("\nMatriz B:\n");
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            printf("Ingrese el numero en la posicion %d,%d: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
    }

    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            suma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Matriz A:\n");
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            printf("%d ",matrizA[i][j]);
            if(j==col-1){
                printf("\n");
            }
        }
    }

    printf("Matriz B:\n");
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            printf("%d ",matrizB[i][j]);
            if(j==col-1){
                printf("\n");
            }
        }
    }

    printf("Matriz suma: \n");

    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            printf("%d ",suma[i][j]);
            if(j==col-1){
                printf("\n");
            }
        }
    }*/


    return 0;
}
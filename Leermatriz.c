#include <stdio.h>

#define col 3
#define fil 3

void lecturaMatriz(int n, int m, int matriz[n][m]);

void sumaMatriz(int n, int m, int matriz1[n][m],int matriz2[n][m],int matriz3[n][m]);

void transpuesta(int n, int m, int matriz[n][m], int trans[m][n]);

void multiEscalar(int n, int m, int matriz[n][m], int mult[n][m]);

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

void transpuesta(int n, int m, int matriz[n][m], int trans[m][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[j][i] = matriz[i][j];
        }
    }
}

void multiEscalar(int n, int m, int matriz[n][m], int mult[n][m]){
    int num;
    printf("Ingrese el numero por el que quiera multiplicar la matriz: ");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             mult[i][j] = num * matriz[i][j];
        }
    }
}


int main(void){
    int matrizA[fil][col];
    int matrizB[fil][col];
    int suma[fil][col];
    int trans[fil][col];
    int multEsc[fil][col];

    printf("Matriz A: \n");
    lecturaMatriz(fil, col, matrizA);
    //printf("Matriz B: \n");
    //lecturaMatriz(fil, col, matrizB);
    //sumaMatriz(fil, col, matrizA, matrizB, suma);
    transpuesta(fil,col,matrizA,trans);
    multiEscalar(fil, col, matrizA, multEsc);

    /*printf("\nMatriz suma: \n");
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            printf("%d ",suma[i][j]);
            if(j==col-1){
                printf("\n");
            }
        }
    }*/

    printf("Matriz transpuesta\n");

    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

    printf("Multiplicacion escalar por matriz\n");
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            printf("%d ",multEsc[i][j]);
        }
        printf("\n");
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
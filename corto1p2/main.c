#include <stdio.h>
//array de tamaño n
int main() {
    int fila, columna,filas,columnas,numero;
    double ganancias;
    printf("ingrese el numero de filas");
    scanf("%d",&filas);
    printf("ingrese el numero de columnas");
    scanf("%d",&columnas);
    int matriz[filas][columnas];
    //se llena la matriz
    printf("ingrese los datos de la matriz");
        for(fila=0;fila<filas;fila++){
        for(columna=0;columna<columnas;columna++){
            printf("matriz[%d][%d]=",fila+1,columna+1);
            scanf("%d",&numero);
            matriz[fila-1][columna-1]=numero;
        }
    }
    //se ingresa la posicion que desea borrar
    printf("ingrese la posicion que desea borrar: ");
    printf("ingrese la fila");
    scanf("%d",&fila);
    printf("ingrese la columna");
    scanf("%d",&columna);
    if(fila>0 && columna>0 && fila-1<filas && columna-1<columnas){
        matriz[fila-1][columna-1]=0;
    }
    //imprimimos la matriz
    for(fila=0;fila<filas;fila++){
        for(columna=0;columna<columnas;columna++){
            printf("matriz[%d][%d]=",fila+1,columna+1);
            printf("%d",matriz[fila][columna]);
            printf("\n");
        }
    }
    return 0;
}
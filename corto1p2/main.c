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
    printf("ingrese los datos de la matriz \n");
        for(fila=0;fila<filas;fila++){
        for(columna=0;columna<columnas;columna++){
            printf("matriz[%d][%d]=",fila,columna);
            scanf("%d",&numero);
            matriz[fila][columna]=numero;
        }
    }
    //se ingresa la posicion que desea borrar
    printf("ingrese la posicion que desea borrar: \n");
    printf("ingrese la fila");
    scanf("%d",&fila);
    printf("ingrese la columna");
    scanf("%d",&columna);
    if(fila>=0 && columna>=0 && fila<=filas && columna<=columnas){
        matriz[fila][columna]=0;
    }
    //imprimimos la matriz
    for(fila=0;fila<filas;fila++){
        for(columna=0;columna<columnas;columna++){
            printf("matriz[%d][%d]=",fila,columna);
            printf("%d",matriz[fila][columna]);
            printf("\n");
        }
    }
    return 0;
}

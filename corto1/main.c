#include <stdio.h>
//cine
int main() {
    //declaramos variables
    int fila, columna,opcion;
    double ganancias;
    //declaramos matriz
    int matriz[5][5];
    //los asientos tendran 2 valores 1 para ocupado y 0 para disponible
    for(fila=0;fila<5;fila++){
        for(columna=0;columna<5;columna++){
            //se ponen todos los asientos disponibles
            matriz[fila][columna]=0;
        }
    }
    //se imprimen los precios
    printf("precios:\nfila 1:$5.0\nfila 5:$2.5\ndemas:$3.5");
    printf("\n\n");
    printf("ingrese la opcion que desea: \n1-comprar entradas \n2-verificar un asiento\n3-mostrar ganancias\n4-ver sala\notro-salir");
    printf("\n");
    scanf("%d",&opcion);
    //entra al menu
    while (opcion>0 && opcion<5){
        //para comprar asientos
        if (opcion==1){
            fila=0;columna=0;
            printf("ingrese la posicion de la fila del asiento ");
            scanf("%d",&fila);
            printf("ingrese la posicion columna del asiento ");
            scanf("%d",&columna);
            //valida que sea una posicion valida
            if(fila>0&&fila<6&&columna>0&&columna<6){
                //verifica que no este vendido
                if(matriz[fila-1][columna-1]==0){
                    matriz[fila-1][columna-1]=1;
                    printf("\n");
                    printf(" ASIENTO COMPRADO \n");
                    //sumamos a ganancia dependiendo de la fila
                    if(fila-1==0){
                        ganancias=ganancias+5;
                    } else if(fila-1==4){
                        ganancias=ganancias+2.5;

                    }else{
                        ganancias=ganancias+3.5;
                    }
                    //si esta ocupado lo dira
                }else if(matriz[fila-1][columna-1]==1){
                    printf("\n");
                    printf("EL ASIENTO ESTA OCUPADO");
                }
            }else{
                printf("\n");
                printf("FUERA DE RANGO");
            }
            printf("\n");
            printf("\n");
        //si elige la opcion 2
        }else if(opcion==2){
            fila=0;columna=0;
            printf("ingrese la posicion de la fila del asiento que desea verificar ");
            scanf("%d",&fila);
            printf("ingrese la posicion columna del asiento que desea verificar ");
            scanf("%d",&columna);
            //comprueba si esta ocupado o no
            if(fila>0&&fila<6&&columna>0&&columna<6){
                if(matriz[fila-1][columna-1]==0){
                    printf("\n");
                    printf("ASIENTO NO OCUPADO \n");
                }else{
                    printf("\n");
                    printf("ASIENTO ESTA OCUPADO \n");
                }
                printf("\n");
                printf("\n");

            }else{
                printf("FUERA DE RANGO");
            }
            //si quiere saber la ganancia
        }else if(opcion==3){
            printf("\n");
            printf("las ganancias son: $%lf",ganancias);
            printf("\n");
            printf("\n");
            //muestra toda la sala
        }else if(opcion==4){

            printf("\n");
            printf("0-dispoble,1-ocupado\n");
            for(fila=0;fila<5;fila++){
                for(columna=0;columna<5;columna++){
                printf("%d ",matriz[fila][columna]);
                }
                printf("\n");
            }
            printf("\n");
        }
        //vuelve a preguntar el menu
        printf("ingrese la opcion que desea: \n1-comprar entradas \n2-verificar un asiento\n3-mostrar ganancias\n4-ver sala\notro-salir");
        scanf("%d",&opcion);
        printf("\n");
    }
    return 0;
}
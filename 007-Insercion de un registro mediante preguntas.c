#include <stdio.h>

int main(){
    printf("Programa de gestión de clientes\n");
    printf("v0.1\n");
    printf("por Jose Vicente Carratalá\n");
    printf("Menú principal\n");
    printf("1.-Insertar un nuevo cliente\n");
    printf("2.-Listado de clientes\n");
    printf("3.-Actualizar un cliente\n");
    printf("4.-Eliminar un cliente\n");
    printf("Selecciona una opción de las anteriores: \n");
    int opcion;
    scanf("%d",&opcion);
    printf("La opción seleccionada es: %d \n",opcion);
    if(opcion == 1){
        printf("Vamos a insertar un registro\n");
        printf("Introduce la razon social del cliente\n");
        printf("Introduce la dirección del cliente\n");
        printf("Introduce la población del cliente\n");
        printf("Introduce el código postal del cliente\n");
        printf("Introduce la identificación fiscal del cliente\n");
        printf("Introduce el nombre de contacto del cliente\n");
        
    }else if(opcion == 2){
        printf("Vamos a listar registros\n");
    }else if(opcion == 3){
        printf("Vamos a actualizar un registro\n");
    }else if(opcion == 4){
        printf("Vamos a eliminar un registro\n");
    }else{
        printf("Opción no válida\n");
    }
    return 0;
}
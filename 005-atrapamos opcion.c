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
    return 0;
}
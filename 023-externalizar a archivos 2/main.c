#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones/globales.c"
#include "funciones/leerRegistros.c"
#include "funciones/guardarRegistros.c"
#include "funciones/bienvenida.c"
#include "funciones/dibujarMenu.c"
#include "funciones/insertarCliente.c"
#include "funciones/listarClientes.c"
#include "funciones/actualizarClientes.c"
#include "funciones/eliminarClientes.c"

void menu(){
    dibujarMenu();
    printf("Selecciona una opción de las anteriores: \n");
    int opcion;
    scanf("%d",&opcion);
    printf("La opción seleccionada es: %d \n",opcion);
    if(opcion == 1){
        insertarCliente();
    }else if(opcion == 2){
        listarClientes();
    }else if(opcion == 3){
        actualizarClientes();
    }else if(opcion == 4){
        eliminarClientes();
    }else if(opcion == 5){
        guardarRegistros();
    }else{
        printf("Opción no válida\n");
    }
    menu();
}
int main(){
    leerRegistros();
    bienvenida();
    menu();
    return 0;
}
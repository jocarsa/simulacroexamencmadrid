#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Cliente{
    char razon_social[100];
    char direccion[100];
    char poblacion[100];
    char codigo_postal[100];
    char identificacion_fiscal[100];
    char nombre_contacto[100];
};

int contador_clientes = 0;

struct Cliente clientes[100];

void leerRegistros(){
    FILE* ficheropartida;
    ficheropartida = fopen("examen.dat","rb");
    if(ficheropartida != NULL){
        fread(clientes,sizeof(struct Cliente),25,ficheropartida);
        fclose(ficheropartida);
        FILE* fichero_contador;
        fichero_contador = fopen("examen.dat","rb");
        if(fichero_contador == NULL){
            printf("error");
            exit(1);
        }
        size_t numeroleidos = fread(clientes,sizeof(struct Cliente),25,ficheropartida);
        contador_clientes = numeroleidos;
        fclose(fichero_contador);
    }
}
void bienvenida(){
    printf("Programa de gestión de clientes\n");
    printf("v0.1\n");
    printf("por Jose Vicente Carratalá\n");
}
void dibujarMenu(){
    printf("Menú principal\n");
    printf("1.-Insertar un nuevo cliente\n");
    printf("2.-Listado de clientes\n");
    printf("3.-Actualizar un cliente\n");
    printf("4.-Eliminar un cliente\n");
    printf("5.-Guardar registros\n");
}
void insertarCliente(){
    struct Cliente nuevo_cliente;
        printf("Vamos a insertar un registro\n");
        printf("Introduce la razon social del cliente\n");
        scanf("%s",nuevo_cliente.razon_social);
        printf("Introduce la dirección del cliente\n");
        scanf("%s",nuevo_cliente.direccion);
        printf("Introduce la población del cliente\n");
        scanf("%s",nuevo_cliente.poblacion);
        printf("Introduce el código postal del cliente\n");
        scanf("%s",nuevo_cliente.codigo_postal);
        printf("Introduce la identificación fiscal del cliente\n");
        scanf("%s",nuevo_cliente.identificacion_fiscal);
        printf("Introduce el nombre de contacto del cliente\n");
        scanf("%s",nuevo_cliente.nombre_contacto);
        printf("Registro insertado correctamente\n");
        printf("Comprobamos que el registro se ha insertado correctamente\n");
        printf("Razon: %s\n",nuevo_cliente.razon_social);
        printf("Direccion: %s\n",nuevo_cliente.direccion);
        printf("Poblacion: %s\n",nuevo_cliente.poblacion);
        printf("CP: %s\n",nuevo_cliente.codigo_postal);
        printf("Id: %s\n",nuevo_cliente.identificacion_fiscal);
        printf("Contacto: %s\n",nuevo_cliente.nombre_contacto);
        clientes[contador_clientes] = nuevo_cliente;
        contador_clientes++;
}
void listarClientes(){
    printf("Vamos a listar registros\n");
        for(int i = 0;i<contador_clientes;i++){
            printf("Cliente numero :%i \n",i);
            printf("Razon social del cliente %s \n",clientes[i].razon_social);
            printf("Dirección del cliente %s \n",clientes[i].direccion);
            printf("Población del cliente %s \n",clientes[i].poblacion);
            printf("Código postal del cliente %s \n",clientes[i].codigo_postal);
            printf("Identificación fiscal del cliente %s \n",clientes[i].identificacion_fiscal);
            printf("Nombre del contacto del cliente %s \n",clientes[i].nombre_contacto);
            printf("----------------------------\n");
        }
}
void actualizarClientes(){
    printf("Vamos a actualizar un registro\n");
        printf("Introduce el id de cliente que quieres modificar: \n");
        int id_cliente;
        scanf("%i",&id_cliente);
        printf("Introduce la nueva razon social del cliente\n");
        scanf("%s",clientes[id_cliente].razon_social);
        printf("Introduce la nueva dirección del cliente\n");
        scanf("%s",clientes[id_cliente].direccion);
        printf("Introduce la nueva población del cliente\n");
        scanf("%s",clientes[id_cliente].poblacion);
        printf("Introduce el nuevo código postal del cliente\n");
        scanf("%s",clientes[id_cliente].codigo_postal);
        printf("Introduce la nueva identificación fiscal del cliente\n");
        scanf("%s",clientes[id_cliente].identificacion_fiscal);
        printf("Introduce el nuevo nombre de contacto del cliente\n");
        scanf("%s",clientes[id_cliente].nombre_contacto);
        printf("Registro actualizado correctamente\n");
}
void eliminarClientes(){
    printf("Vamos a eliminar un registro\n");
        printf("Introduce el id de cliente que quieres borrar: \n");
        int id_cliente;
        scanf("%i",&id_cliente);
        strcpy(clientes[id_cliente].razon_social,"");
        strcpy(clientes[id_cliente].direccion,"");
        strcpy(clientes[id_cliente].poblacion,"");
        strcpy(clientes[id_cliente].codigo_postal,"");
        strcpy(clientes[id_cliente].identificacion_fiscal,"");
        strcpy(clientes[id_cliente].nombre_contacto,"");
        printf("Registro borrado correctamente\n");
}
void guardarRegistros(){
    printf("Vamos a persistir los registros\n");
        FILE* fichero;
        fichero = fopen("examen.dat","wb");
        fwrite(&clientes,sizeof(struct Cliente),contador_clientes,fichero);
        fclose(fichero);
        printf("Registro borrado correctamente\n");
}
void menu(){
    dibujarMenu();
    printf("Selecciona una opción de las anteriores: \n");
    int opcion;
    scanf("%d",&opcion);
    printf("La opción seleccionada es: %d \n",opcion);
    if(opcion == 1){
        insertarCliente();
    }else if(opcion == 2){
        listarClientes()
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
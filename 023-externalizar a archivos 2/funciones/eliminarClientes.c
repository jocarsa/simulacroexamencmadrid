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
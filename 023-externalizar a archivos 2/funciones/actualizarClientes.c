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
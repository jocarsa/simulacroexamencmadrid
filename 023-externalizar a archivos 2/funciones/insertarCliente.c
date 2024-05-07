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
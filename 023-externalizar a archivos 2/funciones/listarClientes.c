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
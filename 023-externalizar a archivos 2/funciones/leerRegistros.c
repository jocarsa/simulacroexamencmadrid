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
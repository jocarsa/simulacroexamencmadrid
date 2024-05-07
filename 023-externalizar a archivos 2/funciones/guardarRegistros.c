void guardarRegistros(){
    printf("Vamos a persistir los registros\n");
        FILE* fichero;
        fichero = fopen("examen.dat","wb");
        fwrite(&clientes,sizeof(struct Cliente),contador_clientes,fichero);
        fclose(fichero);
        printf("Registro borrado correctamente\n");
}
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
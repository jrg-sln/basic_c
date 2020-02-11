#include <stdio.h>

char *imprime_mes(int);

int main(void){
    char *mes = NULL;
    int n; puts("Introduzca el número del mes deseado ");
    if (scanf("%d", &n) != 1){
        printf("No ingresaste un entero.\n");
        return 0;
    }
    mes = imprime_mes(n);
    (n < 1 || n > 12) ? printf("%s\n", mes) : printf("El mes seleccionado es:\n%s\n", mes);
    return 0;
}

/* M�todo que genera un arreglo de caracteres (apuntador de apuntadores */
char *imprime_mes(int numero){
    static char *mes[] = {
        "No existe ese mes.",
        "Enero", "Febrero", "Marzo",
        "Abril", "Mayo", "Junio",
        "Julio", "Agosto", "Septiembre",
        "Octubre", "Noviembre", "Diciembre" };

    return (numero < 1 || numero > 12) ? mes[0] : mes[numero];
}

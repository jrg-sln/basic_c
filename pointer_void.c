#include <stdio.h>

void imprimir(void *, int);

int main() {
    char a='b';
    int x=3;
    double y=4.5;
    char *cad="hola";
    imprimir(&a, 0);
    imprimir(&y, 1);
    imprimir(&x, 2);
    imprimir(cad, 3);
    return 0;
}

void imprimir( void *p, int d) {
    switch(d) {
        case 0:
            printf("%c\n",*(char *)p);
            break;
        case 1:
            printf("%e\n",*(double *)p);
            break;
        case 2:
            printf("%d\n",*(int *)p);
            break;
        case 3:
            printf("%s\n",(char *)p);
            break;
        default:
            printf("Error ");
    }
}

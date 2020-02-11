#include <stdio.h>

int main(){
    char caracterA = 'A';
    int a=160;
    int o=162;
    printf("La codificaci%cn del car%ccter A\n", o, a);
    printf("en este sistema en hexadecimal es: %x\n", caracterA);
    printf("en este sistema en decimal es: %i\n", caracterA);
    printf("en este sistema en car%ccter es: %c\n", a, caracterA);
    return 0;
}

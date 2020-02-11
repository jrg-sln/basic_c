#include<stdio.h>

int main(){
    printf("\nTipo de dato\tEn memoria\n");
    printf("---------------------------------\n");
    printf("char\t\t%lu byte.\n", sizeof(char));
    printf("short\t\t%lu bytes.\n", sizeof(short));
    printf("int\t\t%lu bytes.\n", sizeof(int));
    printf("long\t\t%lu bytes.\n", sizeof(long));
    printf("float\t\t%lu bytes.\n", sizeof(float));
    printf("double\t\t%lu bytes.\n", sizeof(double));
    printf("long double\t%lu bytes.\n\n", sizeof(long double));
}

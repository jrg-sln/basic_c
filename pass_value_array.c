#include<stdio.h>

void pasarReferencia(int m[]);

int main(){
    int nums[] = {55,44,33,22,11}, cont;
    printf("\n\tValores iniciales:\n");
    for (cont=0 ; cont<5 ; cont++){
        printf("%i\t",nums[cont]);
    }

    pasarReferencia(nums);

    printf("\n\n\tValores finales:\n");
    for (cont=0 ; cont<5 ; cont++){
        printf("%i\t",nums[cont]);
    }
    printf("\n\n");

    return 0;
}

void pasarReferencia(int m[]){
    int cont;
    for (cont=0 ; cont<5 ; cont++){
        m[cont]=cont;
    }
}

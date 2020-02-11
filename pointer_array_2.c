#include<stdio.h>

int main () {
    short arr[5] = {91,28,73,46,55};
    short *apArr, cont;
    apArr = arr;

    printf("\tarr:\n");
    for (cont=0 ; cont<5 ; cont++){
        printf("%i\t",arr[cont]);
    }

    printf("\n\napArr = arr\n\n");
    printf("    *apArr = %i\n",*apArr);
    printf("*(apArr+1) = %i\n",*(apArr+1));
    printf("*(apArr+2) = %i\n",*(apArr+2));
    return 0;
}

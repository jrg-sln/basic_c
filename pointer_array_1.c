#include<stdio.h>

int main () {
    short arr[5], *apArr;
    apArr = &arr[0];
    printf("  arr = %x\n",arr);
    printf("apArr = %x\n",apArr);
    return 0;
}

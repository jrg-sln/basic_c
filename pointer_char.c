#include <stdio.h>

int main(){
    char c = 'x';
    char *ap;
    ap = &c;
    printf("&c = \t%x\n", &c);
    printf("ap -> \t%x\n", ap);
    printf("&ap = \t%x\n", &ap);
    return 0;
}

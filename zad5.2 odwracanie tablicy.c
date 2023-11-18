#include <stdio.h>

main(){
    int A=100;
    int *pA;
    
    pA=&A;
    *pA=20;
    printf("\n A=%d", A, *pA);
    
}

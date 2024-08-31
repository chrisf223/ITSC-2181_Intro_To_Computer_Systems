#include <stdio.h>

int main(void) {
    int M = 10;
    int B2[M], B[M]; 

    for (int i=0; i<M; i++){
        B[i] = i;
    }

    printf("Contents of B: \n");
    for (int i=0; i<M; i++){
        printf("B[%d] = %d\n", i, B[i]);
    }

    B2[0] = B[0];
    B2[M-1] = B[M-1];

    for (int i=1; i<M-1; i++)
    {
        B2[i] = B[i-1]+B[i]+B[i+1]; 
    }


    printf("\n\nContents of B2: \n");
    for (int i=0; i<M; i++){
        printf("B2[%d] = %d\n", i, B2[i]);
    }

    return 0; 
}
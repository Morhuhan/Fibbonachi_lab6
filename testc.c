#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711

int function_1(int *A, int size) {

    printf("size of A = %d", size);

}

void main (void) {

int A[30];

function_1(A, sizeof(A)/sizeof(int));

}
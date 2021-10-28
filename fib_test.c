#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711

int fib(int n) {
    if (n <= 1) return n;
    else return fib(n-1) + fib(n-2);
}

void main (void) {

    int A[20];

    int B[10];

    int a;

    int i_a;

    int flag = 0;

    for (int i = 0; i < 20; i++) {  

        A[i] = fib (i);

        printf ("%d \n", A[i]);

    }

    printf ("enter 10 numbers \n");

    for (int i = 0; i < 10; i++) {

        scanf ("%d", &B[i]);

    }

    for (int i = 0; i < 10; i++) {

        for (int i = 0; i < 20; i++) {

            if (B[0] == A[i]) {
                i_a = i;
            }

        }

        if (A[i_a] == B[i] ) {

            continue;

        }

        else {

            printf ("error");
            flag = 1;
            break;

        }

        i_a++;

    }

    if (flag != 1) {

        printf ("vse ok!");

    }
    
}
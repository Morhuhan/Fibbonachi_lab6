#include <stdio.h>

// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711

int fib(int n) {                        // функция создает последовательность чисел Фиббоначи начиная с 1 элемента заканчиавая n-ым
    if (n <= 1) return n;
    else return fib(n-1) + fib(n-2);
}

int search_first(int *A, int *B, int size_A, int size_B) {
    int i_a;
    for (int i = 0; i < 20; i++) {                      // Цикл находит в массиве B первое число, которое совпадает с каким либо числом из массива A                                       
        if (B[0] == A[i]) {
            i_a = i;                                    // Запись первого совпадающего числа в переменную i_a
        }
    }
    return i_a;
}

void check(int *A, int *B, int i_a) {
    int flag = 0;
    for (int i = 0; i < 10; i++) {                      // Цикл проверяет все 10 элементов массива B на сходство с элементами массива A
        if (A[i + i_a] == B[i] ) {
            continue;
        }
        printf("error! Numder %d is uncorrect", B[i]);     // Если хоть одно число не совпадает цикл прерывается с ошибкой
        flag = 1;
        break;
    }
    if (flag != 1) {                                    // Если цикл смог заврешиться, выдается сообщение об успешной работе
        printf("ok!");
    }
}

void main (void) {
    int A[30];
    int B[10];
    int i_a;

    for (int i = 0; i < 30; i++) {                      // Массив A заполняется 20 числами из последовательности фиббоначи 
        A[i] = fib (i);
        // printf ("%d ", A[i]);
    }

    printf("enter 10 numbers \n");

    for (int i = 0; i < 10; i++) {                      // Массив B заполняется числами с клавиатуры
        scanf("%d", &B[i]);
    }

    i_a = search_first(A, B, (sizeof(A)/sizeof(A[0])), (sizeof(B)/sizeof(B[0])));

    check(A, B, i_a);

}

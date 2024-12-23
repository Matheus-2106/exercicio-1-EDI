#include <stdio.h>

int main(void) {
    // Item a)
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma, tam;

    // Item b)
    soma = A[0] + A[1] + A[5];
    printf("A soma entre os valores dos indices 0, 1 e 5:\n%d + %d + %d = %d\n", A[0], A[1], A[5], soma);

    // Item c)
    A[4] = 100;

    // Item d)
    tam = sizeof(A) / sizeof(A[0]);  // Tamanho do vetor A
    printf("Valores armazenados no vetor A:\n");
    for (int i = 0; i < tam; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}
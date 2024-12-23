#include <stdio.h>

int main(void) {
    int vet[6];

    printf("Digite 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        printf("valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("Valores informados: \n");
    for (int i = 0; i < 6; i++) {
        printf(" %d |", vet[i]);
    }

    return 0;
}
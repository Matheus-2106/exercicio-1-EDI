#include <stdio.h>

int main(void) {
    int num[10], maior, menor;

    printf("Informe 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &num[i]);
    }
    maior = num[0];
    menor = num[0];
    for (int i = 1; i < 10; i++) {
        if (num[i] > maior) {
            maior = num[i];
        }
        if (num[i] < menor) {
            menor = num[i];
        }
    }
    printf("Maior: %d\nMenor: %d", maior, menor);

    return 0;
}   
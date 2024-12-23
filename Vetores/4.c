#include <stdio.h>

int main(void) {
    int num[8], x, y, soma;

    printf("Informe 8 valores inteiros:\n");
    for (int i = 0; i < 8; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &num[i]);
    }
    printf("Escolha duas posicoes do vetor (0 a 7):\nx = ");
    
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    soma = num[x] + num[y];

    num[x] = soma;
    num[y] = soma;

    printf("Vetor com valores atualizados:\n");
    for (int i = 0; i < 8; i++) {
        printf("num[%d] = %d\n", i, num[i]);
    }

    return 0;
}
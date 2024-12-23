#include <stdio.h>

int main(void) {
    float num[10], num_quad[10];

    printf("Informe 10 valores reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &num[i]);
        num_quad[i] = num[i] * num[i];
    }
    for (int i = 0; i < 10; i++) {
        printf("%f^2 = %f\n", num[i], num_quad[i]);
    }

    return 0;
}
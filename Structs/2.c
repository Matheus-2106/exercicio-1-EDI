#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct Pessoa {
    char nome[50], sexo;
    float altura, massa, imc;
    char cpf[12];
};

// Função que exibe o IMC de acordo com o cpf digitado
void procurar_por_cpf(struct Pessoa pessoa[], int total_pessoas, char cpf[]) {
    int encontrado = 0;

    for (int i = 0; i < total_pessoas; i++) {
        if (strcmp(pessoa[i].cpf, cpf) == 0) {
            encontrado = 1;
            printf("IMC de %s: %f",pessoa[i].nome, pessoa[i].imc);
        }
    }

    if (!encontrado) {
        printf("\nPessoa com CPF %s nao encontrada.\n", cpf);
    }
}

int main(void) {
    struct Pessoa pessoa[5];

    srand(time(NULL));

    strcpy(pessoa[0].nome, "Matheus Linhares");
    pessoa[0].sexo = 'M';
    pessoa[0].altura = 1.75;
    pessoa[0].massa = 60;
    pessoa[0].imc = pessoa[0].massa / (pessoa[0].altura * pessoa[0].altura);
    // Bloco que gera cpf automaticamente e evita digitação desnecessária 
    for (int i = 0; i < 11; i++) {
        int num = rand() % 10;
        pessoa[0].cpf[i] = num + '0';
    }
    pessoa[0].cpf[11] = '\0';

    strcpy(pessoa[1].nome, "Amanda Camile");
    pessoa[1].sexo = 'F';
    pessoa[1].altura = 1.70;
    pessoa[1].massa = 68;
    pessoa[1].imc = pessoa[1].massa / (pessoa[1].altura * pessoa[1].altura);
    for (int i = 0; i < 11; i++) {
        int num = rand() % 10;
        pessoa[1].cpf[i] = num + '0';
    }
    pessoa[1].cpf[11] = '\0';

    strcpy(pessoa[2].nome, "Robson Junior");
    pessoa[2].sexo = 'M';
    pessoa[2].altura = 1.73;
    pessoa[2].massa = 56;
    pessoa[2].imc = pessoa[2].massa / (pessoa[2].altura * pessoa[2].altura);
    for (int i = 0; i < 11; i++) {
        int num = rand() % 10;
        pessoa[2].cpf[i] = num + '0';
    }
    pessoa[2].cpf[11] = '\0';

    strcpy(pessoa[3].nome, "Elnaran Sarmento");
    pessoa[3].sexo = 'M';
    pessoa[3].altura = 1.77;
    pessoa[3].massa = 65;
    pessoa[3].imc = pessoa[3].massa / (pessoa[3].altura * pessoa[3].altura);
    for (int i = 0; i < 11; i++) {
        int num = rand() % 10;
        pessoa[3].cpf[i] = num + '0';
    }
    pessoa[3].cpf[11] = '\0';

    strcpy(pessoa[4].nome, "Mariah Massaranduba");
    pessoa[4].sexo = 'F';
    pessoa[4].altura = 1.70;
    pessoa[4].massa = 65;
    pessoa[4].imc = pessoa[4].massa / (pessoa[4].altura * pessoa[4].altura);
    for (int i = 0; i < 11; i++) {
        int num = rand() % 10;
        pessoa[4].cpf[i] = num + '0';
    }
    pessoa[4].cpf[11] = '\0';

    printf("\nPessoas cadastradas:\n\n");

    printf("\t%-10s %-6s %-9s %-12s %-12s\n", "Nome", "Sexo", "Altura", "Massa", "CPF");
    
    printf("%-20s %-5c %-8.2f %-8.2f %-12s\n", pessoa[0].nome, pessoa[0].sexo, pessoa[0].altura, pessoa[0].massa, pessoa[0].cpf);
    printf("%-20s %-5c %-8.2f %-8.2f %-12s\n", pessoa[1].nome, pessoa[1].sexo, pessoa[1].altura, pessoa[1].massa, pessoa[1].cpf);
    printf("%-20s %-5c %-8.2f %-8.2f %-12s\n", pessoa[2].nome, pessoa[2].sexo, pessoa[2].altura, pessoa[2].massa, pessoa[2].cpf);
    printf("%-20s %-5c %-8.2f %-8.2f %-12s\n", pessoa[3].nome, pessoa[3].sexo, pessoa[3].altura, pessoa[3].massa, pessoa[3].cpf);
    printf("%-20s %-5c %-8.2f %-8.2f %-12s\n", pessoa[4].nome, pessoa[4].sexo, pessoa[4].altura, pessoa[4].massa, pessoa[4].cpf);

    char cpf_busca[12];
    printf("\nDigite o CPF para buscar a pessoa (apenas numeros): ");
    scanf("%s", cpf_busca);

    procurar_por_cpf(pessoa, 5, cpf_busca);

    return 0;
}
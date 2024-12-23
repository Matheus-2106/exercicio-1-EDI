#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int matricula;
    float notas[2], media;
};

int main(void) {
    struct Aluno aluno1;
    struct Aluno aluno2;
    struct Aluno aluno3;
    struct Aluno aluno4;
    struct Aluno aluno5;

    strcpy(aluno1.nome, "Matheus Linhares");
    aluno1.matricula = 2024001245;
    aluno1.notas[0] = 9.4;
    aluno1.notas[1] = 10;
    aluno1.media = (aluno1.notas[0] + aluno1.notas[1]) / 2;

    strcpy(aluno2.nome, "Julio Cesar");
    aluno2.matricula = 2017008741;
    aluno2.notas[0] = 9.7;
    aluno2.notas[1] = 9.8;
    aluno2.media = (aluno2.notas[0] + aluno2.notas[1]) / 2;

    strcpy(aluno3.nome, "Robson Junior");
    aluno3.matricula = 2024001387;
    aluno3.notas[0] = 7.5;
    aluno3.notas[1] = 6.7;
    aluno3.media = (aluno3.notas[0] + aluno3.notas[1]) / 2;

    strcpy(aluno4.nome, "Lucas Monteiro");
    aluno4.matricula = 2023004179;
    aluno4.notas[0] = 4.2;
    aluno4.notas[1] = 3.5;
    aluno4.media = (aluno4.notas[0] + aluno4.notas[1]) / 2;

    strcpy(aluno5.nome, "Elnatan Sarmento");
    aluno5.matricula = 2024001105;
    aluno5.notas[0] = 9.0;
    aluno5.notas[1] = 9.9;
    aluno5.media = (aluno5.notas[0] + aluno5.notas[1]) / 2;

    printf("\tNome \t\t Matricula    Media\n");
    printf("%s\t%d   %f\n", aluno1.nome, aluno1.matricula, aluno1.media);
    printf("%s\t\t%d   %f\n", aluno2.nome, aluno2.matricula, aluno2.media);
    printf("%s\t\t%d   %f\n", aluno3.nome, aluno3.matricula, aluno3.media);
    printf("%s\t\t%d   %f\n", aluno4.nome, aluno4.matricula, aluno4.media);
    printf("%s\t%d   %f\n", aluno5.nome, aluno5.matricula, aluno5.media);

    return 0;
}
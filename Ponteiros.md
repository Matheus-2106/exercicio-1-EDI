1) Como "temp" é apenas uma variável temporária, não precisa ser declarado como ponteiro. Aliás, declarar "temp" como ponteiro pode gerar problemas, pois não se saberá para qual local da memória ele está apontando. Basta fazer da seguinte forma:
```c
void misterio(int *p, int *q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}
```
2) 
```c
int i = 99, j; // Declara duas variáveis inteiras
int *p;  // Declara um ponteiro inteiro, sem inicializá-lo
p = &i;  // Inicializa o ponteiro com o endereço da variável i
j = *p + 100;  // Atribui à jota o valor do endereço para onde p está apontando com o acréscimo de 100
printf("%d", j);  // output: 199
```
3) 
```c
int a = 5, b = 12;  // Declaração e atribuição de variáveis inteiras a e b
int *p;  // Declaração de ponteiro p
int *q;  // Declaração de ponteiro q
p = &a;  // Inicialização de p apontando para o endereço de a
q = &b;  // Inicialização de q apontando para o endereço de b
int c = *p + *q;  // Soma dos conteúdos dos ponteiros p e q atribuída à variável inteira c
printf("%d", c);  // output: 17
```
4) 
```c
int i = 7, j = 3;  // Declaração e atribuição das variáveis inteiras i e j
int *p;  // Declaração do ponteiro p
int **r;  // Declaração do ponteiro de ponteiro r
p = &i;  // Inicialização de p apontando para o endereço de i
r = &p;  // Inicialização de r apontando para o endereço de p
c = **r + j;  // Soma do conteúdo do ponteiro de ponteiro r com a variável j
/* OBS: A variável c não foi declarada, o que resultará em um erro de compilação
A correção seria int c = **r + j;*/
printf("%d", c); // output: 10
```
5) 
```c
    int x, y, *p;y = 0;  // Declaração das variáveis x e y e do ponteiro p
    p = &y;  // Inicialização de p apontando para y (p=0)
    x = *p;  // Atribuição do conteúdo de p para x (x=0)
    x = 4;  // Atribuição do valor 4 para x, substituindo o valor anterior (x=4)
    (*p)++;  // Acréscimo de 1 unidade no conteúdo de p (p=1 e y=1)
    --x;  // Decréscimo de 1 unidade no valor de x (x=3)
    (*p) += x;  // Conteúdo de p é acrescido do valor x (p=4 e y=4)
    printf("%d", y);  //output: 4
```
6) 
a)
```c
void main() {
    int x, *p;
    x = 100;
    p = x;
    printf("Valor de p: %d\n", *p);
}
```
O erro está em `p = x`, pois está sendo atribuído o valor de x ao ponteiro p sem que um local da memória tenha sido especificado, ou seja, p pode estar apontando para qualquer local da memória. Para corrigir o problema, basta fazer a alteração `p = &x`.
b)
```c
void troca(int *i, int *j) {
    int *temp;
    *temp = *i;
    *i = *j;
    *j = *temp;
}
```
O erro está na sentença `*temp = *i`, pois está sendo atribuído ao ponteiro temp o conteúdo do ponteiro i, sem que tempo tenha sido inicializado, ou seja, temp pode estar apontando para qualquer local da memória. Os demais ponteiros (i e j) foram inicializados por passagem de parâmetro. Para corrigir o problema, basta fazer:
```c
void troca(int *i, int *j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
```
Observa-se que temp pode simplesmente ser uma variável comum.
c)
```c
void main() {
    char *a, *b;
    a = "abacate";
    b = "uva";
    if (a < b)
    printf("%s vem antes de %s no dicionario.", a, b);
    else
    printf("%s vem depois de %s no dicionario.", a, b);
}
```
O erro do código está na linha `if (a < b)`. O que está sendo comparado é o endereço dos ponteiros e não o conteúdo deles. Para corrigir o problema, pode-se utilizar a função strcmp do arquivo-cabeçalho <string.h>:
```c
#include <stdio.h>
#include <string.h>

void main() {
    char *a, *b;
    a = "abacate";
    b = "uva";
    if (strcmp(a, b) < 0) {
        printf("%s vem antes de %s no dicionário.\n", a, b);
    } else {
        printf("%s vem depois de %s no dicionário.\n", a, b);
        }
}
```
7)
a) `int *p;`
Nesse caso, o operador * funciona como um indicador de que um ponteiro está sendo declarado.
b) `cout << *p`
Acessa o conteúdo de p.
c) `*p=x*5;`
O primeiro * indica que o conteúdo apontado por p está sendo alterado. Já o segundo asterístico indica uma multiplicação.
d) `cout << *(p+1);`Acessa e imprime o valor armazenado na posição de memória seguinte ao endereço apontado por p.

8) Primeiramente, são necessários algumas correções no código:
```c
#include <iostream>
using namespace std;

int main() {
    int i = 5, *p;
    p = &i;
    cout << p << '\t'  // Endereço de i
         << (*p + 2) << '\t'  // Valor apontado por p mais 2
         << **&p << '\t'  // Valor apontado por p
         << (3 * *p) << '\t'  // 3 vezes o valor apontado por p
         << (**&p + 4);  // Valor apontado por p mais 4
    return 0;
}
```

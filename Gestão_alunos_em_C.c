#include <stdio.h>

typedef struct
{
    char nome[50];
    int num_matricula;
    float nota;

} alunos;

int main()
{
    alunos al[5];
    int i = 0;

    for (i = 0; i <= 4; i++)
    {
        printf("Insira o nome: ");
        scanf("%s", al[i].nome);
        printf("Insira o num da matricula: ");
        scanf("%d", &al[i].num_matricula);
        printf("Insira a nota: ");
        scanf("%f", &al[i].nota);
    }

    for (i = 0; i <= 4; i++)
    {
        printf("Nome: %s/n", al[i].nome);
        printf("Numero da matricula: %d/n", al[i].num_matricula);
        printf("Nota: %f/n", al[i].nota);
    }

    return 0;
}

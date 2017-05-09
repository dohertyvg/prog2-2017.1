/* CALCULAR E ESCREVER O CR DE ALUNOS ONDE A QTD SERÁ LIDA.
CRIAR UM REGISTRO DE ALUNOS COM NUMERO DA MATRICULA, QTD DE DISCIPLINA, NOTAS DAS DISCIPLINAS E
O CR.
DIZER QUEM OBTEVE O MAIOR CR E A MATRICULA DO ALUNO QUE OBTEVE O MAIOR CR */

#include <stdio.h>

struct aluno
{
    int matricula;
    int qtddisc;
    float *notas;
    float cr;
}

int main()
{
    struct aluno *alunossi;
    int n, i, j;
    float soma = 0;
    
    printf("Quantos alunos?");
    scanf("%d", &n);
    
    alunossi = (struct aluno *)malloc(n*sizeof(struct aluno));
    
    for(i=0;i<n-1;i++)
    {
        soma = 0;
        printf("\nEntre com o numero de matricula:\n");
        scanf("%d", &alunossi[i].matricula);
        printf("\nEntre com a quantidade de disciplinas:\n");
        scanf("%d", &alunossi[i].qtddisc);
        alunossi[i].notas = (float *)malloc(alunossi[i].qtddisc*sizeof(float));
        for(j=0;j<alunossi[i].qtddisc;j++)
        {
            printf("\nEntre com a nota:\n");
            scanf("%d", &alunossi[i].notas[j]);
            soma += alunossi[i].notas[j];
        }
        
        alunossi[i].cr soma/alunossi[i].qtddisc;
    }
    
}
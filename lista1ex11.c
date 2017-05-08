/* FAÇA UM PROCEDIMENTO QUE CARREGUE UM VETOR COM 80 POSIÇÕES E ENCONTRE
O MAIOR E MENOR VALOR. APÓS ISTO, O PROCEDIMENTO DEVERÁ TROCAR O MAIOR VALOR
COM A PRIMEIRA POSIÇÃO E O MENOR VALOR COM A ÚLTIMA POSIÇÃO */

#include <stdio.h>
#include <string.h>

void troca(int *vetor,int tam)
{
    int aux;
    
    aux = vetor[0];
    vetor[0] = vetor[tam-1];
    vetor[tam-1] = aux;
    
}


int main()
{
    int vet[80], i, tam = 80;
    
    printf("\n\nOla usuario. Digite 80 elementos (numeros inteiros) para compor um vetor.\n");
    
    for(i=0;i<80;i++)
    {
    printf("\nVetor[%d]: ", i+1);scanf("%d", &vet[i]);
    }
    
    printf("\nPrimeiro elemento do vetor: %d\nUltimo elemento do vetor: %d\n", vet[0], vet[79]);
    
    printf("Trocando o ultimo e primeiro elemento de lugar...\n");
    
    troca(vet, tam);
    
    printf("Elementos trocados!\n\n");
    
    printf("\nPrimeiro elemento do vetor: %d\nUltimo elemento do vetor: %d\n", vet[0], vet[79]);
    
    return 0;
}
/* ESCREVER UM PROCEDIMENTO, QUE INVERTA A ORDEM DOS ELEMENTOS DE UM VETOR
SEM USAR UM VETOR AUXILIAR */

#include <stdio.h>
#include <string.h>


void inverte(int *a, int tam)
{
    int aux;
    int i;
    
    for(i=0;i<tam/2;i++)
    {
        aux=a[i];
        a[i]=a[(tam-1)-i];
        a[(tam-1)-i]=aux;
    }
}


int main()
{
    
    int i;
    int tam;
    
    printf("Ola usuario. Digite o tamanho do vetor:\n");
    scanf("%d", &tam);
    
    int vetor[tam];
    
    printf("\nSiga as instruçoes para preencher o vetor de %d elementos:\n", tam);
    
    for(i=0;i<tam;i++)
    {
        printf("Digite o elemento %d (restante(s): %d):\n", i+1, tam-i);
        printf("vetor[%d]:", i+1);scanf("%d", &vetor[i]);
    }
    
    printf("\n\nVETOR INVERTIDO:\n\n");
    
    inverte(vetor, tam);
    
    for(i=0;i<tam;i++)
    {
        printf("%d", vetor[i]);
    }
    
    return 0;
    
}
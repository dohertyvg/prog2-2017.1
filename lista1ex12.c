/* FAÇA UM MÓDULO QUE, PESQUISANDO NUM VETOR ORDENADO FORNECIDO POR PARÂMETRO, OBTENHA
O ÍNDICE DE UM DADO ELEMENTO. O ELEMENTO A PESQUISAR É TAMBÉM FORNECIDO POR PARÂMETRO.
SE O ELEMENTO NÃO EXISTIR O MÓDULO DEVE FINALIZAR. */

#include <stdio.h>


int pesquisa(int *ponteirovetor, int tam, int elemento)
{
    int i;
    
    for(i=0;i<tam;i++)
    {
        if(ponteirovetor[i]==elemento)
        {
            return i+1;
            break;
        }
        else
        {
            i++;
        }
        
        return 0;
    }
}

int main()
{
    int tam;
    
    printf("Qual tamanho do vetor?\n");
    scanf("%d", &tam);
    
    int vetor[tam], i;
    
    printf("Agora digite os elementos para preencher o vetor de tamanho %d\n", tam);
    
    for(i=0;i<tam;i++)
    {
        printf("\nElemento %d: ", i+1);scanf("%d", &vetor[i]);
    }
    
    printf("\nVetor preenchido com sucesso.\n");
    
    int elemento;
    
    printf("\nDigite o elemento que deseja pesquisar no vetor:\n");
    scanf("%d", &elemento);
    
    int indice;
    
    indice = pesquisa(vetor, tam, elemento);
    
    if(indice!=0)
    {
        printf("\nO elemento %d esta no indice %d\n", elemento, indice);
    }
    else
    {
        printf("Elemento nao encontrado no vetor!");
    }
    
    return 0;
}


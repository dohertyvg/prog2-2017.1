/* FAZER UM PROGRAMA MODULARIZADO QUE FAÇA UMA RESERVA DE PASSAGENS AEREAS DE UMA 
COMPANHIA. ALEM DA LEITURA DOS VOOS E QUANTIDADE DE LUGARES DISPONIVEIS, LER VARIOS 
PEDIDOS DE RESERVA, CONSTITUIDOS DO NUMERO DA CARTEIRA DE IDENTIDADE DO CLIENTE E DO 
NUMERO DE VOO DESEJADO.
PARA CADA CLIENTE VERIFICAR SE HA DISPONIBILIDADE NO VOO DESEJADO, EM CASO AFIRMATIVO, 
IMPRIMIR O NUMERO DA IDENTIDADE DO CLIENTE, E O NUMERO DO VOO, ATUALIZANDO O NUMERO DE
LUGARES DISPONÍVEIS. CASO CONTRÁRIO, AVISAR AO CLIENTE DA INEXISTÊNCIA DE LUGARES.
INDICANDO O FIM DOS PEDIDOS DE RESERVA, EXISTE UM PASSAGEIRO CUJO NUMERO DA CARTEIRA
DE IDENTIDADE E 9999. CONSIDERAR FIXO E IGUAL A 37 O NUMERO DE VOOS DA COMPANHIA. */

#include <stdio.h>

int main()
{
    int id;
    int voos[3][2];
    int lugaresdisp;
    int i;
    int voodesejado;
    
    printf("\n# CADASTRE O NUMERO DE CADA VOO E A QUANTIDADE DE LUGARES DISPONIVEIS EM CADA VOO #\n\n");
    
    for(i=0;i<3;i++)
    {
        printf("Digite o numero do voo:\n");
        scanf("%d", &voos[i][0]);
        
        printf("\nDigite a qtd de lugares disp no voo %d:\n", i+1);
        scanf("%d", &voos[i][1]);
    }
    
    printf("\n## VOOS E QUANTIDADE DE LUGARES CADASTRADOS COM SUCESSO ##\n\n");
    printf("## Iniciando procedimento de venda e reserva de passagens ##\n");
    
    
    while(id!=9999)
    {
        printf("\nDigite a identidade do cliente:\n");
        scanf("%d", &id);
    
        printf("\nDigite o voo desejado pelo cliente:\n");
        scanf("%d", &voodesejado);
    
    //ESSE FOR QUE ESTÁ CAUSANDO O PROBLEMA
    
        for(i=0;i<3;i++)
            {
                if( (voodesejado == voos[i][0]) && (voos[i][1] != 0) )
                {
                    voos[i][1] += -1;
                    printf("\nVoo %d reservado com sucesso para o cliente %d", i+1, id);
                    break;
                }
                else if( (voodesejado == voos[i][0]) && (voos[i][1] == 0) )
                {
                    printf("\nVoo lotado!");
                    break;
                }
                else if( (voodesejado != voos[i][0]) )
                {
                    i++;
                }
                
                printf("\nVoo inexistente!\n");
            }
    }
    
    return 0;
    
}
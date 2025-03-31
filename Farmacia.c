#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"");
    int opcao, valor, quant;
    valor = 0;
    
    printf("\nBem-Vindo a nossa loja!!\n");
    
    do
    {
        printf("O que você deseja comprar?:\n");
        printf("1. Paracetamol - R$5,00\n");
        printf("2. Ibuprofeno - R$7,50\n");
        printf("3. Dipirona - R$4,00\n");
        printf("4. Amoxicilina - R$12,00\n");
        printf("5. Sair\n");
        scanf("%d", &opcao);
        
        printf("Informe a quantidade de unidades que voce deseja:\n");
        scanf("%d", &quant);
        
        switch(opcao) {
            case 1:
            valor = valor + quant * 5;
            printf("O preço total é de %d\n", valor);
            break;
            case 2:
            valor = valor + quant * 7.50;
            printf("O peço total é de %d\n", valor);
            break;
            case 3:
            valor = valor + quant * 4;
            printf("O preço total é de %d\n", valor);
            break;
            case 4:
            valor = valor + quant * 12;         
            printf("O preço total é de %d\n", valor);
            break;
            case 5:
            printf("Saindo...\n");
            break;
            
            default:
            printf("Opção invalida! Tente novamente.");
        }
        printf("Deseja continuar comprando?\n");
        printf("1. Sim:\n");
        printf("2. Não:\n");
        scanf("%d", &opcao);
        
    }while(opcao == 1);
    printf("\nObrigada por comprar conosco!!\n");
    
    return 0;
}
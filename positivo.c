#include <stdio.h>
#include <locale.h>
int main() {
    setlocale (LC_ALL,"");
    int numero;
    printf("Digite o numero:");
    scanf("%d", &numero);
    if(numero>0)
    {
        printf("O numero é positivo!");
    }
    else if(numero<0)
    {
        printf("O numero é negativo!");
    }
    else
    {
        printf("O numero é 0");
    }
    return 0;
}
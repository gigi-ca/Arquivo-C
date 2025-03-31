#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
float salario, valor;
printf("informe seu salario:\n");
    scanf("%f",&salario);

    if(salario <= 1903.98)
    {
       printf("Seu imposto é isento:\n");
    }
    else if (salario >= 1903.99 && salario <= 2826.65)
    {
       printf("seu imposto é de %.2f:\n", salario * 0.075);
    }
    else if (salario >= 2826.66 && salario <= 3751.05)
    {
       printf("seu imposto é de %.2f:\n", salario * 0.15);
    }
    else if (salario >= 3751.06 && salario <= 4664.68)
    {
       printf("seu imposto é de %.2f:\n", salario * 0.225);
    }
    else if (salario < 4664,68) 
    {
       printf("seu imposto é de %.2f:\n", salario * 0.275);
    }
   
   return 0;
}
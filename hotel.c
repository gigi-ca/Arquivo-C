#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	char nome[20];
	char infnome[20];
	char sobren[20];
	int infoc, infontele, infoi, infodata, infodataout, infoquant, infoquar, adulto, crianca;
	printf("Bem vindo ao hotel Vilahotel\n");
	//cadastro
	printf("Faça o seu cadastro\n");
	printf("informe seu nome:\n");
	scanf("%s", infnome);
	printf("informe seu sobrenome:\n");
	scanf("%s", sobren);
	printf("informe seu cpf:\n");
	scanf("%d", &infoc);
	printf("informe seu numero de telefone:\n");
	scanf("%d", &infontele);
	printf("informe sua idade:\n");
	scanf("%d", &infoi);
	printf("informe a data de checkin:\n");
	scanf("%d", &infodata);
	printf("informe a data de chekout\n");
	scanf("%d", &infodataout);
	printf("informe quantas pessoas sao:\n");
	scanf("%d", &infoquant);
	printf("informe quantos quartos voce quer:\n");
	scanf("%d", &infoquar);
	printf("informe quantos adultos sao:\n");
	scanf("%d", &adulto);
	printf("informe quantas criancas sao:\n");
	scanf("%d", &crianca);
	if(infoi<=18)
	{
		printf("Voce nao pode continuar o cadastro\n");
	}
	else
	{
		printf("Prossiga\n");
	}
	if(adulto==2 && crianca==1)
	{
		printf("Quarto Suite premium com 1 cama de casal e 1 de solteiro\n");
	}
	else if(adulto==2 && crianca>=2)
	{
		printf("Quarto Suite premium plus com 2 ou mais camas de casal\n");
	}
	else if(adulto==2 && infoquar==2)
	{
		printf("Dois quartos com 1 cama de solteiro\n");
	}
	else if(adulto==1 && crianca==1)
	{
		printf("Um quarto Simples com uma cama de casal\n");
	}
	else
	{
		printf("Quarto Solteiro com uma cama de solteiro\n");
	}
	//servico de Quarto
	int num;
	char *serviço;
	printf("Escolha um pacote de serviço de quarto:\n");
	printf("1. servico basico\n");
	printf("2. servico sofisticado\n");
	printf("3. servico completo valor\n");
	printf("4. servico completo plus valor\n");
	scanf("%d", &num);
	switch(num) {
	case 1:
		printf("Limpeza diaria do quarto, troca de toalhas, reposicao de amenidades basicas e serviço de refeicoes basicas\n");
		break;
	case 2:
		printf("Limpeza profunda e preparcao do quarto, reposicao de amenidades basicas, decoracao personalizada e serviço de preparacao para a noite\n");
		break;
	case 3:
		printf("Limpeza e arrumacao completa do quarto, amenidades de alta qualidade, refeicoes e lanches gourmet, experiencia de relaxamento, preparacao especial do quarto e extras personalizados (Sob Pedido)\n");
		break;
	case 4:
		printf("Limpeza e arrumacao premium, amenidades de luxo e cuidados pessoais, gastronomia de alta classe no quarto, bem-estar e relaxamento personalizado, extras sob demanda, decoracao e personalizacao sob pedido\n");
		break;
	default:
		printf("Opcao invalida!Programa encerrado. \n");
	return 1;
	}
	//pedido
	int numero;
	char pedido;
	printf("Escolha os pedidos que deseja:\n");
	printf("1. comidas e bebidas\n");
	printf("2. intens de conforto\n");
	printf("3. amenidades de higiene pessoal\n");
	printf("4. decoracao e ambiente\n");
	printf("5. servicos de Bem-Estar\n");
	scanf("%d", &numero);
	switch(numero) {
	case 1:
        printf("Cafe da manha no quarto, lanches e petiscos e bebidas\n");
	     break;
	case 2:
        printf("Travesseiros extras, roupão de banho e chinelos, cobertores extras e toalhas extras\n");
	     break;
	case 3:
        printf("Produtos de higiene, secador de cabelo, escova de dentes, creme dental ou kit de barbear\n");
	     break;
    case 4:
        printf("Flores frescas e vela aromática\n");
        break;
    case 5:
        printf("Massagem no quarto e kit de banho ou spa\n");
        break;
    default:
		printf("Opcao invalida!Programa encerrado. \n");
	return 1;
	}
	// pagamento
	int comb;
	char *combo;
	printf("Escolha um combo:\n");
	printf("1. combo basico\n");
	printf("2. combo medio\n");
	printf("3. combo alto\n");
	printf("4. combo plus\n");
	scanf("%d", &comb);
    switch(comb){
    case 1:
        printf("o combo basico é o quarto simples + o servico basico, o valor desse combo é de 600 reais\n");
        break;
    case 2:
        printf("o combo basico é o quarto Suite  + o servico sofisticado, o valor desse combo é de 1000 reais \n");
        break;
    case 3:
        printf("o combo basico é o quarto Suite premium + o servico completo, o valor desse combo é de 1650 reais \n");
        break;
    case 4:
        printf("o combo basico é o quarto Premium plus + o servico completo plus, o valor desse combo é de 2200 reais \n");
    default:
		printf("Opcao invalida!Programa encerrado. \n");
	return 1;
    }
    int pag;
    printf("escolha uma forma de pagamento:\n");
    printf("1. cartao de credito\n");
    printf("2. cartao de debito\n");
    printf("3. pix\n");
    scanf("%d", &pag);
    return 0;
}
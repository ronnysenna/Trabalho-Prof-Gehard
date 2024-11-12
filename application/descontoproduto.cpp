#include <iostream>
#include <stdio.h>

int main(int argc, char** argv) {
	
	float produto, avista, creditoavista, creditopar2x, creditoparc3x;
	
	printf("\n\t Digite o valor do produto: ");
	scanf("%f", &produto);

	avista = produto * 0.9;              
	creditoavista = produto * 0.95;      
	creditopar2x = produto / 2; 
	creditoparc3x = (produto * 1.1) / 3; 
	
	// Exibe as opções de pagamento
	printf("\n\t Valor do produto: R$ %.2f", produto);
	printf("\n\t Pagamento a vista com 10%% de desconto: R$ %.2f", avista);
	printf("\n\t Pagamento no cedito a vista com 5%% de desconto: R$ %.2f", creditoavista);
	printf("\n\t Pagamento no credito em 2x de R$ %.2f cada", creditopar2x);
	printf("\n\t Pagamento no credito em 3x de R$ %.2f cada (com 10%% de acrescimo)", creditoparc3x);
	
	return 0;
}


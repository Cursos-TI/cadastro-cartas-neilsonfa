#include <stdio.h>

int main(){
	// Declaração de variaveis.
	char estado_1, cod_carta_1[3], nome_cidade_1[20], estado_2, cod_carta_2[3], nome_cidade_2[20];
	int populacao_1, num_pontos_turisticos_1, populacao_2, num_pontos_turisticos_2;
	float area_1, pib_1, area_2, pib_2;

	// Recebendo os dados do usuario da primeira carta.
	printf("Digite uma letra de A a H para representar o estado:\n");
	scanf("%c", &estado_1);
	printf("\n");

	printf("Digite o codigo da carta:\n");
	scanf("%s", &cod_carta_1);
	printf("\n");

	printf("Digite o nome da cidade:\n");
	scanf("%s", &nome_cidade_1);
	printf("\n");

	printf("Digite a populacao da cidade:\n");
	scanf("%d", &populacao_1);
	printf("\n");

	printf("Digite a area da cidade (km):\n");
	scanf("%f", &num_pontos_turisticos_1);
	printf("\n");

	printf("Digite o PIB da cidade:\n");
	scanf("%f", &area_1);
	printf("\n");

	printf("Digite a quantidade de pontos turisticos:\n");
	scanf("%d", &pib_1);
	printf("\n");

	// Recebendo os dados do usuario da segunda carta.
	printf("Digite uma letra de A a H para representar o estado:\n");
	scanf("%c", &estado_2);
	printf("\n");

	printf("Digite o codigo da carta:\n");
	scanf("%s", &cod_carta_2);
	printf("\n");

	printf("Digite o nome da cidade:\n");
	scanf("%s", &nome_cidade_2);
	printf("\n");

	printf("Digite a populacao da cidade:\n");
	scanf("%d", &populacao_2);
	printf("\n");

	printf("Digite a area da cidade (km):\n");
	scanf("%f", &num_pontos_turisticos_2);
	printf("\n");

	printf("Digite o PIB da cidade:\n");
	scanf("%f", &area_2);
	printf("\n");

	printf("Digite a quantidade de pontos turisticos:\n");
	scanf("%d", &pib_2);

	// Exibindo o resultado da primeiora carta.
	printf("\n");
	printf("Carta 1:\n");
	printf("Estado: %c\n", estado_1);
	printf("Codigo: %s\n", cod_carta_1);
	printf("Nome da Cidade: %s\n", nome_cidade_1);
	printf("Populacao: %d\n", populacao_1);
	printf("Area: %.2f\n", area_1);
	printf("PIB: %.2f\n", pib_1);
	printf("Numero de Pontos Turistricos: %d\n", num_pontos_turisticos_1);
	printf("\n");

	// Exibindo o resultado da primeiora carta.
	printf("Carta 2:\n");
	printf("Estado: %c\n", estado_2);
	printf("Codigo: %s\n", cod_carta_2);
	printf("Nome da Cidade: %s\n", nome_cidade_2);
	printf("Populacao: %d\n", populacao_2);
	printf("Area: %.2f\n", area_2);
	printf("PIB: %.2f\n", pib_2);
	printf("Numero de Pontos Turistricos: %d\n", num_pontos_turisticos_2);

	return 0;
}
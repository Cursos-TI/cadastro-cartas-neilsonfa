#include <stdio.h>
#include <string.h> // Biblioteca para usar a função strcspn para remover o Enter das variáveis nome_cidade_1 e nome_cidade_2.

int main(){
	// Declaração de variaveis.
	char estado_1, cod_carta_1[3], nome_cidade_1[30], estado_2, cod_carta_2[3], nome_cidade_2[30];

	int populacao_1, num_pontos_turisticos_1, populacao_2, num_pontos_turisticos_2;

	float area_1, pib_1, area_2, pib_2;

	// Recebendo os dados do usuario da primeira carta.
	printf("Digite uma letra de A a H para representar o estado da cidade 1:\n");
	scanf(" %c", &estado_1); // O espaço antes do %c faz o scanf ignorar ENTER, TAB e ESPAÇO.

	printf("Digite o codigo da carta da cidade 1:\n");
	scanf(" %s", &cod_carta_1);

	printf("Digite o nome da cidade 1:\n");
	fflush(stdin);   // limpa o buffer.
	fgets(nome_cidade_1, 30, stdin);
	nome_cidade_1[strcspn(nome_cidade_1, "\n")] = '\0'; // removendo o Enter.

	printf("Digite a populacao da cidade da cidade 1:\n");
	scanf("%d", &populacao_1);

	printf("Digite a area da cidade 1 (km):\n");
	scanf("%f", &area_1);

	printf("Digite o PIB da cidade 1:\n");
	scanf("%f", &pib_1);

	printf("Digite a quantidade de pontos turisticos da cidade 1:\n");
	scanf("%d", &num_pontos_turisticos_1);

	// Recebendo os dados do usuario da segunda carta.
	printf("Digite uma letra de A a H para representar o estado da cidade 2:\n");
	scanf(" %c", &estado_2); // O espaço antes do %c faz o scanf ignorar ENTER, TAB e ESPAÇO.

	printf("Digite o codigo da carta da cidade 2:\n");
	scanf(" %s", &cod_carta_2);

	printf("Digite o nome da cidade 2:\n");
	fflush(stdin);   // limpa o buffer.
	fgets(nome_cidade_2, 30, stdin);
	nome_cidade_2[strcspn(nome_cidade_2, "\n")] = '\0'; // removendo o Enter.

	printf("Digite a populacao da cidade 2:\n");
	scanf("%d", &populacao_2);

	printf("Digite a area da cidade 2 (km):\n");
	scanf("%f", &area_2);

	printf("Digite o PIB da cidade 2:\n");
	scanf("%f", &pib_2);

	printf("Digite a quantidade de pontos turisticos da cidade 2:\n");
	scanf("%d", &num_pontos_turisticos_2);

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
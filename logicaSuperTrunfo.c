#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


  // Atributos referente a carta 1 do Usuario
   char estado;
   char codigoCarta[50];
   char nomeCidade[50];
   int populacao;
   float area;
   float pib;
   int pontos_turisticos;
   float densidade_populacional;
   float pib_capita;

   // Atributos referente a carta 2 do Usuario
   char estado_2;
   char codigoCarta_2[50];
   char nomeCidade_2[50];
   int populacao_2;
   float area_2;
   float pib_2;
   int pontos_turisticos_2;
   float densidade_populacional_2;
   float pib_capita_2;

   // Interação com usuario,para cadastrar dados da carta 1
   printf("Digite estado da carta: ");
   scanf(" %c", &estado);

   printf("Digite codigo da carta: ");
   scanf("%s", &codigoCarta);
   getchar(); // limpa /n deixado pelo scanf

   printf("Digite nome da cidade: ");
   fgets(nomeCidade, sizeof(nomeCidade), stdin); // Lê uma linha inteira,inclusive com espaços

   printf("Digite o numero de habitantes da cidade: ");
   scanf("%d", &populacao);

   printf("Digite area  da cidade em quilômetros: ");
   scanf("%f", &area);

   printf("Digite produto interno bruto da cidade: ");
   scanf("%f", &pib);

   printf("Digite pontos turisticos: ");
   scanf("%d", &pontos_turisticos);

   // Área de calculo carta 1
   densidade_populacional = populacao / area;

   // (pib * 1000000000) converter o PIB de bilhões para unidades monetárias completas.

   pib_capita = (pib * 1000000000)  / populacao;

   // Interação com usuario,para cadastrar dados da carta 2
   printf("----------------------------\n");

   printf("Digite estado da carta: ");
   scanf(" %c", &estado_2);

   printf("Digite codigo da carta: ");
   scanf("%s", &codigoCarta_2);
   getchar(); // limpa /n deixado pelo scanf

   printf("Digite nome da cidade: ");
   fgets(nomeCidade_2, sizeof(nomeCidade_2), stdin); // Lê uma linha inteira,inclusive com espaços

   printf("Digite o numero de habitantes da cidade: ");
   scanf("%d", &populacao_2);

   printf("Digite area  da cidade em quilômetros: ");
   scanf("%f", &area_2);

   printf("Digite produto interno bruto da cidade: ");
   scanf("%f", &pib_2);

   printf("Digite pontos turisticos: ");
   scanf("%d", &pontos_turisticos_2);

   // Área de calculo carta 2
   densidade_populacional_2 = populacao_2 / area_2;


   pib_capita_2 = (pib_2 * 1000000000) / populacao_2;


   
   int escolha;

  //Menu de interação com  o usuário
   printf("-------------MENU---------------\n");
   printf("1 - População \n");
   printf("2 - Área \n");
   printf("3 - Número de pontos turísticos \n");
   printf("4 - Densidade demográfica \n");
   printf("--------------------------------\n");


   printf("Qual campo deseja comparar? \n");  //escolha determina critério de escolha
   scanf("%d",&escolha);
   

                            
     switch (escolha)
   {
     case 1: 
     printf("----------------------------\n");
     printf("       ***RESULTADO***    \n");
 
       if (populacao > populacao_2) 
   {
      printf("Carta %c%s  Venceu! \n",estado,codigoCarta); //A carta é referia  pelo seu codigo e estado

   }else if(populacao < populacao_2){

      printf("Carta %c%s  Venceu! \n",estado_2,codigoCarta_2);

   } else{

      printf("Houve um empate!");

   }

      break;

    case 2:
     printf("----------------------------\n");
     printf("       ***RESULTADO***    \n");
    
      if (area > populacao_2) 
   {

      printf("Carta %c%s  Venceu! \n",estado,codigoCarta);

   }else if(area < area_2){

      printf("Carta %c%s  Venceu! \n",estado_2,codigoCarta_2);

   } else{

      printf("Houve um empate!");

   }

     break;

     case 3:
     printf("----------------------------\n");
     printf("       ***RESULTADO***    \n");
       if (pontos_turisticos > pontos_turisticos_2) 
   {
      printf("Carta %c%s  Venceu! \n",estado,codigoCarta);

   }else if(pontos_turisticos < pontos_turisticos_2){

      printf("Carta %c%s  Venceu! \n",estado_2,codigoCarta_2);

   } else{

      printf("Houve um empate!");
   }  

     
     break;

     case 4:
      printf("----------------------------\n");
     printf("       ***RESULTADO***    \n");

       if (densidade_populacional < densidade_populacional_2) 
   {
     printf("Carta %c%s  Venceu! \n",estado,codigoCarta);

   }else if(densidade_populacional > densidade_populacional_2){

       printf("Carta %c%s  Venceu! \n",estado_2,codigoCarta_2);

   } else{

      printf("Houve um empate! \n");

   }  

     break;

   default:
    
   printf(" **Erro** valor invalido digitado! \n");

      break;
   }




      // Leitura dos dados fornecidos da carta 1
   printf("----------------------------\n");
   printf("Carta 1 \n");
   printf("Código: %c%s \n", estado, codigoCarta);
   printf("Nome da cidade: %s", nomeCidade);
   printf("População: %d\n", populacao);
   printf("Área: %.2f km² \n", area);
   printf("PIB: %.2f bilhões de reais\n", pib);
   printf("Número de Pontos turisticos: %d \n", pontos_turisticos);
   printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional);
   printf("PIB per capita: %.2f\n", pib_capita, "reais");
   

   // Leitura dos dados fornecidos da carta 2
   printf("----------------------------\n");
   printf("Carta 2 \n");
   printf("Código: %c%s \n", estado_2, codigoCarta_2);
   printf("Nome da cidade: %s", nomeCidade_2);
   printf("População: %d\n", populacao_2);
   printf("Área: %.2f km² \n", area_2);
   printf("PIB: %.2f bilhões de reais\n", pib_2);
   printf("Número de Pontos turisticos: %d \n", pontos_turisticos_2);
   printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional_2);
   printf("PIB per capita: %.2f reais \n ", pib_capita_2);

   

    return 0;
}

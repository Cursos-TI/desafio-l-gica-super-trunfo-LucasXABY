#include <stdio.h>

int main(){

    // Desafio Super Trunfo Iniciante
    char estados[50];
    char estado2[50];
    char codigo[50];
    char codigo2[50];
    char cidade[50];
    char cidade2[50];
    unsigned long int populacao;
    unsigned long int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int ponto;
    int ponto2;
    float resultado11;    // resultado densidade populacional carta 1
    float resultado12;    // resultado densidade populacional carta 2
    float resultado21;    // resultado pib per carta 1
    float resultado22;    // resultado pib per carta 2
    int opcao;
   
 // Carta 1
    printf("Carta 1: \n");
    printf("Digite uma letra de A a H: \n");
    scanf("%s", &estados);  
    printf("Digite uma letra de um estado em seguida de um número de 01 a 04 Ex:(B02,A03): \n");
    scanf("%s", codigo);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", cidade);
    printf("Digite a população: \n");
    scanf("%lu", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto);

    // Carta 2
    printf("Vamos fazer o mesmo processo só que agora pra carta 2: \n");
    printf("Digite uma letra de A a H: \n");
    scanf("%s", &estado2); 
    printf("Digite uma letra de um estado em seguida de um número de 01 a 04 Ex:(B02,A03): \n");
    scanf("%s", codigo2);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto2);

    //Area de calculo

    resultado11 = (float) populacao / area;
    resultado12 = (float) populacao2 / area2;
    resultado21 = (float) pib / populacao;
    resultado22 = (float) pib2 / populacao2;
    

    

    // Impressão
    printf("Carta 1: \n");
    printf("Estado: %s \n", estados);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f Bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", ponto);
    printf("Densidade Populacional: %.2f hab/km² \n", resultado11);
    printf("PIB per Capita: %.2f reais \n", resultado21);
    printf("\n");

    // Carta 2
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", ponto2);
    printf("Densidade Populacional: %.2f hab/km² \n", resultado12);
    printf("PIB per Capita: %.2f reais \n", resultado22);

   //Menu interativo de escolhar de comparação

   printf("Escolha um atributo para comparar\n");
   printf("1 - População\n");
   printf("2 - Área\n");
   printf("3 - PIB\n");
   printf("4 - Número de pontos turísticos\n");
   printf("5 - Densidade demográfica\n");
   scanf("%d",&opcao);

   printf("COMPARAÇÃO\n");
   printf("Carta 1:%s\n",cidade);
   printf("Carta 2:%s\n",cidade2);

   switch (opcao){
   case 1:
   printf("Atributo: População\n");
   printf("%s: %lu habitantes\n",cidade, populacao);
   printf("%s: %lu habitantes\n",cidade2, populacao2);
   if(populacao > populacao2){
        printf("Vencedora: %s\n",cidade);
    }else if(populacao < populacao2){
        printf("Vencerora: %s\n",cidade2);
    }else{
        printf("Empate\n");
    }
    break;
    case 2:
    printf("Atributo: Área\n");
    printf("%s: %.2f Km²\n",cidade, area);
    printf("%s: %.2f Km²\n",cidade2, area2);
    if(area > area2){
        printf("Vencedora:%s\n",cidade);
    }else if(area < area2){
        printf("Vencedora:%s\n",cidade2);
    }else{
        printf("Empate\n");
    }
    break;
    case 3:
    printf("Atributo: PIB\n");
    printf("%s: %.2f Bilhoes\n",cidade, pib);
    printf("%s: %.2f Bilhoes\n",cidade2, pib2);
    if(pib > pib2){
        printf("Vencedora:%s\n",cidade);
    }else if(pib < pib2){
        printf("Vencedora:%s\n",cidade2);
    }else{
        printf("Empate\n");
    }
    break;
    case 4:
    printf("Atributo: Número de pontos turísticos\n");
    printf("%s: %d\n",cidade, ponto);
    printf("%s: %d\n",cidade2, ponto2);
    if(ponto > ponto2){
        printf("Vencedora:%s\n",cidade);
    }else if(ponto < ponto2){
        printf("Vencedora: %s\n",cidade2);
    }else{
        printf("Empate\n");
    }
    break;
    case 5:
    printf("Atributo: Densidade demográfica\n");
    printf("%s: %.2f hab/km²\n",cidade, resultado11);
    printf("%s: %.2f hab/km²\n",cidade2, resultado12);
    if(resultado11 < resultado12){
        printf("Vencedora: %s\n",cidade);
    }else if(resultado11 > resultado12){
        printf("Vencedora: %s\n",cidade2);
    }else{
        printf("Empate\n");
    }
    break;
    default:
    printf("Opção inválida\n");
    }

    return 0;
}
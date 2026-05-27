#include <stdio.h>

int main(){

// Declarando variáveis    
int populacao1,  pontos1, populacao2, pontos2, cidade1, cidade2, estado1, estado2;
float area1, area2, pib1, pib2;
char  pais1, pais2;

// Inicio do jogo
printf("\nBem Vindo ao Super Trunfo!\n");
printf("Cadastre as cartas 1 e depois carta 2!\n");


// Cadastrando carta 1 
do{  printf("Escolha uma letra de A a H!(seu estado)\n");
    scanf(" %c", &estado1); 
    if (!(estado1 >= 'A' && estado1 <= 'H'  ||   estado1>= 'a' && estado1 <= 'h')){
        printf("Você selecionou uma opção inválida, tente novamente!\n");}
    
}while  (!(estado1 >= 'A' && estado1 <= 'H'  ||   estado1>= 'a' && estado1 <= 'h'));

    printf("Estado selecionado!\n");
        
    
    
do{ printf("Escolha um numero de 1 a 4!(seu estado)\n");
    scanf("%d", &cidade1);
    if(!(cidade1 >= 1 && cidade1 <=4)){
        printf("Você selecionou um valor nao permitido, tente novamente!\n");}

}while(!(cidade1 >= 1 && cidade1 <=4)); 
        printf("Cidade selecionada!\n");
    
printf("Digite a população da sua cidade:\n");
    scanf("%d", &populacao1);
printf("Digite a área da sua cidade:\n");
    scanf("%f",&area1 );
printf("Digite o PIB da sua cidade:\n");
    scanf("%f", &pib1);
printf("Digite os pontos turísticos da sua cidade:\n");
    scanf("%d", &pontos1);


    
printf("\nRepita o processo mas agora para a carta 2!\n");

    // Cadastrando carta 2
  do{  printf("Escolha uma letra de A a H!(seu estado)\n");
    scanf(" %c", &estado2); 
    if (!(estado2 >= 'A' && estado2 <= 'H'  ||   estado2>= 'a' && estado2 <= 'h' ) || ( estado2 == estado1)){
        printf("Você selecionou uma opção inválida, tente novamente!\n");}
    }while  (!(estado2 >= 'A' && estado2 <= 'H'  ||   estado2>= 'a' && estado2 <= 'h') || (estado2 == estado1));

    printf("Estado selecionado!\n");
        
    
    
do{ printf("Escolha um numero de 1 a 4!(seu estado)\n");
    scanf("%d", &cidade2);
    if(!(cidade2 >= 1 && cidade2 <=4) || (cidade2 == cidade1)){
        printf("Você selecionou um valor nao permitido, tente novamente!\n");}
}while(!(cidade2 >= 1 && cidade2 <=4) || (cidade2 == cidade1)); 
        printf("Cidade selecionada!\n");

printf("Digite a população da sua cidade:\n");
    scanf("%d", &populacao2);
printf("Digite a área da sua cidade:\n");
    scanf("%f",&area2 );
printf("Digite o PIB da sua cidade:\n");
    scanf("%f", &pib2);
printf("Digite os pontos turísticos da sua cidade:\n");
    scanf("%d", &pontos2);


    // Exibindo o resultado das cartas
printf("\nHora de ver suas cartas!\n");

printf("Carta1:\n");
printf("Estado: %c\n", estado1);
printf("Cidade: %d\n", cidade1);
printf("Código: %c%d\n", estado1, cidade1);
printf("População:%d\n", populacao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos Turísticos: %d\n", pontos1);

printf("Carta2:\n");
printf("Estado: %c\n", estado2);
printf("Cidade: %d\n", cidade2);
printf("Código: %c%d\n", estado2, cidade2);
printf("População:%d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos Turísticos: %d\n", pontos2);


return 0;

}
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");  // comando para corrigir escrita em portugues como Ç e É

    char codigo_carta[4];     
    char estado[20]; 
    char nome[20];
    int populacao; 
    float area;
    float pib;
    int pturisticos;

    char codigo_carta2[4];
    char nome2[20];
    char estado2[20];
    int populacao2; 
    float area2;
    float pib2;
    int pturisticos2;
    

    printf("Cadastre suas cartas\n");   

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);   

    printf("Digite o código da carta: \n");
    scanf("%3s", codigo_carta);  
    
    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite a população: \n");
    scanf("%d", &populacao);
    
    printf("Digite a área \n");
    scanf("%f", &area);
   
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite quantos pontos turísticos a cidade tem: \n");
    scanf("%d", &pturisticos);

    printf("*** Carta 1 ***\n");
    printf("Nome da cidade: %s\n", nome);
    printf("Codigo da carta: %3s\n", codigo_carta);
    printf("O estado da carta é: %s\n", estado);
    printf("A população da cidade é: %d", populacao);
    printf("Área da cidade: %lf\n", area);
    printf("O PIB da cidade: %lf\n", pib);
    printf("Número de pontos turísticos: %d\n", pturisticos);



    // Próxima carta



    printf("Cadastre a segunda carta (n?o utilizar nomes compostos) \n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite o código da carta: \n");
    scanf("%3s", codigo_carta2);

    printf("Digite o estado: \n");
    scanf("%s", estado2);
    
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a área \n");
    scanf("%f", &area2);
   
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite quantos pontos turísticos a cidade tem: \n");
    scanf("%d", &pturisticos2);

    printf("*** Carta 2 ***\n");
    printf("Nome da cidade: %s\n", nome2);
    printf("Codigo da carta: %3s\n", codigo_carta2);
    printf("O estado da carta é: %s\n", estado2);
    printf("A população da cidade é: %d", populacao2);
    printf("Área da cidade: %lf\n", area2);
    printf("O PIB da cidade: %lf\n", pib2);
    printf("Número de pontos turísticos: %d\n", pturisticos2);
   


    return 0;
}
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");  // comando para corrigir escrita em portugues como �� e ��

    char codigo_carta[4];     
    char estado[20]; 
    char nome[20];
    int populacao; 
    float area;
    float pib;
    int pturisticos;
    float densidade_populacional;
    float pib_per_capita;

    char codigo_carta2[4];
    char nome2[20];
    char estado2[20];
    int populacao2; 
    float area2;
    float pib2;
    int pturisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    

    printf("Cadastre suas cartas\n");   

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);   

    printf("Digite o c�digo da carta: \n");
    scanf("%3s", codigo_carta);  
    
    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite a popula�?o: \n");
    scanf("%d", &populacao);
    
    printf("Digite a �rea \n");
    scanf("%f", &area);
   
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite quantos pontos tur�sticos a cidade tem: \n");
    scanf("%d", &pturisticos);

    printf("*** Carta 1 ***\n");
    printf("Nome da cidade: %s\n", nome);
    printf("Codigo da carta: %3s\n", codigo_carta);
    printf("O estado da carta �: %s\n", estado);
    printf("A popula�?o da cidade �: %d\n", populacao);
    printf("A �rea da cidade: %lf km�\n", area);
    printf("O PIB da cidade: %lf bilh?es de reais\n", pib);
    printf("A quantidade de pontos tur�sticos: %d\n", pturisticos);



    // Proxima carta



    printf("Cadastre a segunda carta\n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite o c�digo da carta: \n");
    scanf("%3s", codigo_carta2);

    printf("Digite o estado: \n");
    scanf("%s", estado2);
    
    printf("Digite a popula�?o: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a �rea \n");
    scanf("%f", &area2);
   
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite quantos pontos tur�sticos a cidade tem: \n");
    scanf("%d", &pturisticos2);

    printf("*** Carta 2 ***\n");
    printf("Nome da cidade: %s\n", nome2);
    printf("Codigo da carta: %3s\n", codigo_carta2);
    printf("O estado da carta �: %s\n", estado2);
    printf("A popula�?o da cidade �: %d\n", populacao2);
    printf("A �rea da cidade: %lf km�\n", area2);
    printf("O PIB da cidade: %lf\n bilh?es de reais", pib2);
    printf("N�mero de pontos tur�sticos: %d\n", pturisticos2);

    printf("*** Calculando par�metros***\n");
    
    printf("Par�metros para a carta 1\n");

    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("A densidade populacional da carta 1 �: %f hab/km�\n", densidade_populacional);
    printf("O PIB per Capita da carta 1 �: %f reais\n", pib_per_capita);

    printf("Par�metros para a carta 2\n");

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("A densidade populacional da carta 2 �: %f hab/km�\n", densidade_populacional2);
    printf("O PIB per Capita da carta 2 �: %f reais", pib_per_capita2);



   


    return 0;
}
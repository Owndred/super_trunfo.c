#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");  // comando para corrigir escrita em portugues como �� e ��

    // Variaveis para carta 1
    char codigo_carta[4];     
    char estado[20]; 
    char nome[20];
    unsigned long int populacao; 
    float area;
    float pib;
    int pturisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;


    // Vari�veis para compara�?o
    float comparacao_populacao;
    float comparacao_area;
    float comparacao_pib;
    float comparacao_pturisticos;
    float comparacao_super_poder;
    float comparacao_densidade_populacional;
    float comparacao_pib_per_capita;

    
    // Variaveis para carta 2
    char codigo_carta2[4];
    char nome2[20];
    char estado2[20];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pturisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;
    

    printf("Cadastre suas cartas\n");   

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);   

    printf("Digite o c�digo da carta: \n");
    scanf("%3s", codigo_carta);  
    
    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite a popula�?o: \n");
    scanf("%lu", &populacao);
    
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
    printf("A popula�?o da cidade �: %lu\n", populacao);
    printf("A �rea da cidade: %lf km�\n", area);
    printf("O PIB da cidade: R$ %lf reais\n", pib);
    printf("A quantidade de pontos tur�sticos: %d\n", pturisticos);

    // Proxima carta
    printf("_______________________________________________________\n");

    printf("Cadastre a segunda carta\n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite o c�digo da carta: \n");
    scanf("%3s", codigo_carta2);

    printf("Digite o estado: \n");
    scanf("%s", estado2);
    
    printf("Digite a popula�?o: \n");
    scanf("%lu", &populacao2);
    
    printf("Digite a �rea \n");
    scanf("%f", &area2);
   
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite quantos pontos tur�sticos a cidade tem: \n");
    scanf("%d", &pturisticos2);
    printf("_______________________________________________________\n");

    printf("*** Carta 2 ***\n");
    printf("Nome da cidade: %s\n", nome2);
    printf("Codigo da carta: %3s\n", codigo_carta2);
    printf("O estado da carta �: %s\n", estado2);
    printf("A popula�?o da cidade �: %lu\n", populacao2);
    printf("A �rea da cidade: %lf km�\n", area2);
    printf("O PIB da cidade: R$ %lf reais\n", pib2);
    printf("N�mero de pontos tur�sticos: %d\n", pturisticos2);
    printf("_______________________________________________________\n");

    printf("*** Calculando par�metros***\n");
    
    
    printf("Par�metros para a carta 1\n");
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    printf("A densidade populacional da carta 1 �: %f hab/km�\n", densidade_populacional);
    printf("O PIB per Capita da carta 1 �: R$ %f reais\n", pib_per_capita);
    printf("_______________________________________________________\n");

    printf("Par�metros para a carta 2\n");

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("A densidade populacional da carta 2 �: %f hab/km�\n", densidade_populacional2);
    printf("O PIB per Capita da carta 2 �: R$ %f reais\n", pib_per_capita2);
    
printf("_______________________________________________________\n");
    
    // Comparando atributos

    super_poder = (populacao + area + pib + pturisticos);
    super_poder2 = (populacao2 + area2 + pib2 + pturisticos2);

    comparacao_super_poder = super_poder > super_poder2;
    comparacao_populacao = populacao > populacao2;
    comparacao_area = area > area2;
    comparacao_pib = pib > pib2;
    comparacao_pturisticos = pturisticos > pturisticos2;
    comparacao_densidade_populacional = densidade_populacional > densidade_populacional2;
    comparacao_pib_per_capita = pib_per_capita > pib_per_capita2;
    
    printf("Compara�?o entre carta 1 e carta 2.\n");
    printf("1 para verdadeiro 0 para falso.\n");
    printf("A carta 1 tem a maior popula�?o? - %f\n", comparacao_populacao);
    printf("A carta 1 tem a maior �rea ? - %f\n", comparacao_area);
    printf("A carta 1 tem o maior PIB? - %f\n", comparacao_pib);
    printf("A carta 1 tem mais pontos t�risticos? - %f\n", comparacao_pturisticos);
    printf("A carta 1 tem o maior super poder? - %f\n", comparacao_super_poder);
    printf("A carta 1 tem a maior densidade populacional? - %f\n", comparacao_densidade_populacional);
    printf("A carta 1 tem o maior PIB per capita? - %f\n", comparacao_pib_per_capita);
    
    



   


    return 0;
}
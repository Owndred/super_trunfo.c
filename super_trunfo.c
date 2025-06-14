#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");  // comando para corrigir escrita em portugues como ð‡ e ð‰

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

    // Variáveis para comparaç?o
    
    int cartas;
    int atributos;

    // Cadastrando valores das cartas

    printf("Cadastre suas cartas\n");   

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);   

    printf("Digite o código da carta: \n");
    scanf("%3s", codigo_carta);  
    
    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite a populaç?o: \n");
    scanf("%lu", &populacao);
    
    printf("Digite a área \n");
    scanf("%f", &area);
   
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite quantos pontos turísticos a cidade tem: \n");
    scanf("%d", &pturisticos);

    // Imprimindo carta 1 com valores

    printf("*** Carta 1 ***\n");
    printf("Nome da cidade: %s\n", nome);
    printf("Codigo da carta: %3s\n", codigo_carta);
    printf("O estado da carta é: %s\n", estado);
    printf("A populaç?o da cidade é: %lu\n", populacao);
    printf("A área da cidade: %lf km²\n", area);
    printf("O PIB da cidade: R$ %lf reais\n", pib);
    printf("A quantidade de pontos turísticos: %d\n", pturisticos);

    // Proxima carta
    printf("_______________________________________________________\n");

    printf("Cadastre a segunda carta\n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite o código da carta: \n");
    scanf("%3s", codigo_carta2);

    printf("Digite o estado: \n");
    scanf("%s", estado2);
    
    printf("Digite a populaç?o: \n");
    scanf("%lu", &populacao2);
    
    printf("Digite a área \n");
    scanf("%f", &area2);
   
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite quantos pontos turísticos a cidade tem: \n");
    scanf("%d", &pturisticos2);
    printf("_______________________________________________________\n");

    printf("*** Carta 2 ***\n");
    printf("Nome da cidade: %s\n", nome2);
    printf("Codigo da carta: %3s\n", codigo_carta2);
    printf("O estado da carta é: %s\n", estado2);
    printf("A populaç?o da cidade é: %lu\n", populacao2);
    printf("A área da cidade: %lf km²\n", area2);
    printf("O PIB da cidade: R$ %lf reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pturisticos2);
    printf("_______________________________________________________\n");

    // Calculando atributos extra de cada carta

    printf("*** Calculando parâmetros***\n"); 
    
    printf("Parâmetros para a carta 1\n");
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;
    super_poder = (populacao + area + pib + pturisticos);

    printf("A densidade populacional da carta 1 é: %f hab/km²\n", densidade_populacional);
    printf("O PIB per Capita da carta 1 é: R$ %f reais\n", pib_per_capita);
    printf("O Super Poder da Carta 1 é: %f\n", super_poder);
    
    printf("_______________________________________________________\n");

    printf("Parâmetros para a carta 2\n");

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = (populacao2 + area2 + pib2 + pturisticos2);

    printf("A densidade populacional da carta 2 é: %f hab/km²\n", densidade_populacional2);
    printf("O PIB per Capita da carta 2 é: R$ %f reais\n", pib_per_capita2);
    printf("O Super Poder da Carta 2 é: %f\n", super_poder2);

printf("_______________________________________________________\n");
    
    // Escolhendo a carta para disputa

    printf("Escolha qual sua carta.\n");
    printf("1. Carta 1.\n");
    printf("2. Carta 2.\n");
    scanf("%d", &cartas);

    switch (cartas)
    {
    case 1: // Usuário escolheu a carta 1
        
        printf("Escolha o atributo para comparaç?o.\n");
        printf("1. Populaç?o.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turisticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per Capita.\n");
        printf("7. Super Poder.\n");
        scanf("%d", &atributos);

        switch (atributos)
        {
        case 1:
            if (populacao > populacao2)
            {
                printf("Sua cidade tem a maior populaç?o!\n");
            }
            else{
                printf("Sua cidade n?o tem a maior populaç?o!\n");
            }
            break;

        case 2:
            if (area > area2)
            {
                printf("Sua cidade tem a maior área!\n");
            }
            else
            {
                printf("Sua cidade n?o tem a maior área!\n");
            }
            break;

        case 3:
            if (pib > pib2)
            {
                printf("Sua cidade tem o maior PIB!\n");
            }
            else
            {
                printf("Sua cidade n?o tem o maior PIB!\n");
            }
            break;

        case 4:
            if (pturisticos > pturisticos2)
            {
                printf("Sua cidade tem mais pontos turisticos!\n");
            }
            else
            {
                printf("Sua cidade tem menos pontos turisticos!\n");
            }
            break;

        case 5:
            if (densidade_populacional > densidade_populacional2)
            {
                printf("Sua cidade tem a maior densidade populacional!\n");
            }
            else
            {
                printf("Sua cidade n?o tem a maior densidade populacional!\n");
            }
            break;

        case 6:
            if (pib_per_capita > pib_per_capita2)
            {
                printf("Sua carta tem o maior PIB per Capita!\n");
            }
            else
            {
                printf("Sua cidade n?o tem o maior PIB per Capita!\n");
            }
            break;

        case 7:
            if (super_poder > super_poder2)
            {
                printf("Sua cidade tem o maior super poder!\n");
            }
            else
            {
                printf("Sua cidade n?o tem o maior super poder!\n");
            }
            break;
        }
        
    


    case 2: // Usuário escolheu a carta 2
        
        printf("Escolha o atributo para comparaç?o.\n");
        printf("1. Populaç?o.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turisticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per Capita.\n");
        printf("7. Super Poder.\n");
        scanf("%d", &atributos);

        switch (atributos)
        {
        case 1:
            if (populacao < populacao2)
            {
                printf("Sua cidade tem a maior populaç?o!\n");
            }
            else{
                printf("Sua cidade n?o tem a maior populaç?o!\n");
            }
            break;

        case 2:
            if (area < area2)
            {
                printf("Sua cidade tem a maior área!\n");
            }
            else
            {
                printf("Sua cidade n?o tem a maior área!\n");
            }
            break;

        case 3:
            if (pib < pib2)
            {
                printf("Sua cidade tem o maior PIB!\n");
            }
            else
            {
                printf("Sua cidade n?o tem o maior PIB!\n");
            }
            break;

        case 4:
            if (pturisticos < pturisticos2)
            {
                printf("Sua cidade tem mais pontos turisticos!\n");
            }
            else
            {
                printf("Sua cidade tem menos pontos turisticos!\n");
            }
            break;

        case 5:
            if (densidade_populacional < densidade_populacional2)
            {
                printf("Sua cidade tem a maior densidade populacional!\n");
            }
            else
            {
                printf("Sua cidade n?o tem a maior densidade populacional!\n");
            }
            break;

        case 6:
            if (pib_per_capita < pib_per_capita2)
            {
                printf("Sua carta tem o maior PIB per Capita!\n");
            }
            else
            {
                printf("Sua cidade n?o tem o maior PIB per Capita!\n");
            }
            break;

        case 7:
            if (super_poder < super_poder2)
            {
                printf("Sua cidade tem o maior super poder!\n");
            }
            else
            {
                printf("Sua cidade n?o tem o maior super poder!\n");
            }
            break;
        }

    }
    return 0;
}
#include <math.h>
#include <stdio.h>

int main(){
    float pesoolivia;
    float pesobrutus;
    float alturaolivia;
    float alturabrutus;
    float pesoidealolivia;
    float pesoidealbrutus;
    float imcolivia;
    float imcbrutus;


    pesoolivia = 45;
    pesobrutus = 122;
    alturaolivia = 1.76;
    alturabrutus = 1.84;

    imcolivia = pesoolivia/pow(alturaolivia,2);
    imcbrutus = pesobrutus/pow(alturabrutus,2);


    pesoidealolivia = 18.5 * pow(alturaolivia,2);
    pesoidealbrutus = 24.9 * pow(alturabrutus,2);

    printf("O IMC de Olivia eh %.2f e ela deve ganhar %.1f kg", imcolivia, pesoidealolivia - pesoolivia );
    printf ("\nO IMC de Brutus eh %.2f e ele deve perder %.1f kg", imcbrutus, pesobrutus - pesoidealbrutus);
    printf("\n");

    return 0;
    system("pause");

}

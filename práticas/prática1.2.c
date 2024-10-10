#include <math.h>
#include <stdio.h>

int main(){
    float poupanca = 789.54;
    float juros = 1.0056;

    // 1° mês ao 2°
    poupanca = poupanca * juros;
    // 2° mês
    poupanca = poupanca + 303.20;
    //2° mês ao 3°
    poupanca = poupanca * juros;
    //3° mês
    poupanca = poupanca - 58.25;
    //3° mês ao 4°
    poupanca = poupanca * juros;
    //Fim
    printf("Valor da conta no inicio do quarto mes: %.2f \n", poupanca);

    return 0;
    system ("pause");

}

#include <math.h>
#include <stdio.h>

int main(){
    float poupanca = 789.54;
    float juros = 1.0056;

    // 1� m�s ao 2�
    poupanca = poupanca * juros;
    // 2� m�s
    poupanca = poupanca + 303.20;
    //2� m�s ao 3�
    poupanca = poupanca * juros;
    //3� m�s
    poupanca = poupanca - 58.25;
    //3� m�s ao 4�
    poupanca = poupanca * juros;
    //Fim
    printf("Valor da conta no inicio do quarto mes: %.2f \n", poupanca);

    return 0;
    system ("pause");

}

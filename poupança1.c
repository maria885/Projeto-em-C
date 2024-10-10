#include <math.h>
#include <stdio.h>

int main(){
    float poupanca;
    poupanca=500;

    // 1 mês
    poupanca = poupanca * 1.01;

    // 2 mês
    poupanca = (poupanca + 200) * 1.01;

    // 3 mês
    poupanca = (poupanca - 50) * 1.01;

    // 4 mês
    poupanca = poupanca * 1.01;

    printf("no 4 mes, a poupanca tem valor de: %f \n", poupanca);
    system ("pause");
    return 0;
}

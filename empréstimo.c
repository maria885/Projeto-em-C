#include <stdio.h>
#include <math.h>

int main(){
    float emprestimo;
    emprestimo = 5000;

    //1 periodo: 11/2019 a 01/2020
    emprestimo = emprestimo * pow(1.006,2);

    //1 pagamento
    emprestimo = emprestimo - 1500;

    //2 periodo
    emprestimo = emprestimo * pow(1.006,5);

    //2 pagamento
    emprestimo = emprestimo - 2800;

    //3 periodo
    emprestimo = emprestimo * pow(1.006,2);

    printf("o amigo ainda deve: %.2f reais \n \n", emprestimo);

    system("pause");
    return 0;

}

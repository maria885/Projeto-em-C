#include <math.h>
#include <stdio.h>

float energia(float hora){
    return sin(hora/24 * 3.141592);
}

float pontos(float altura){
    return 10 * (altura * altura);
}

float rebotes (float altura, float peso){
    return 5* altura + sqrt(peso);
}

float eficiencia (float altura, float hora, float peso){
    float e = energia(hora);
    float pts = pontos(altura);
    float rbt = rebotes (altura, peso);

    return e*(pts + rbt);

}


int main(){
    float h=12;
    float a=2;
    float p = 100;


    float ef = eficiencia (a, h, p);
    printf("eficiencia e igual a: %f \n", ef);


    system ("pause");
    return 0;
}

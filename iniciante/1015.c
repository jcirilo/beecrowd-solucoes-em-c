// https://www.beecrowd.com.br/judge/pt/problems/view/1015

#include <stdio.h>
#include <math.h>

int main() {

    float p1x, p1y;
    float p2x, p2y;
    float resultado;
    
    scanf("%f %f", &p1x, &p1y);
    scanf("%f %f", &p2x, &p2y);
    
    resultado = sqrt((pow((p2x-p1x),2))+(pow((p2y-p1y),2)));
    
    printf("%.4f\n", resultado);

    return 0;
}
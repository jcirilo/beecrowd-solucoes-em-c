// https://www.beecrowd.com.br/judge/pt/problems/view/1006

#include <stdio.h>

int main() {
    double peso[3] = {2.0, 3.0, 5.0};
    double nota[3];
    double dividendo = 0.0;
    double divisor = 0.0;

    scanf("%lf %lf %lf", &nota[0], &nota[1], &nota[2]);

    for(int i = 0; i < 3; i++)
    {
        dividendo+=(nota[i]*peso[i]);
        divisor+=(peso[i]);
    }

    printf("MEDIA = %.1lf\n", dividendo/divisor);
    
    return 0;
}
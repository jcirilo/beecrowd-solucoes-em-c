// https://www.beecrowd.com.br/judge/pt/problems/view/1036

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double delta = 0.0;
    double r1 = 0.0;
    double r2 = 0.0;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2.0) - 4 * a * c;

    if (delta < 0.0 || a == 0.0) {
        printf("Impossivel calcular\n");
        exit(0);
    } else {
        r1 = -b + (sqrt(delta));
        r1 /= (a * 2.0);
        
        r2 = -b - (sqrt(delta));
        r2 /= (a * 2.0);
    }

    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);

    return 0;
}
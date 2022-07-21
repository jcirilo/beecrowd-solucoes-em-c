// https://www.beecrowd.com.br/judge/pt/problems/view/1012

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    
    double a, b, c;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    printf("TRIANGULO: %.3lf\n", ((a*c)/2.0));
    printf("CIRCULO: %.3lf\n", PI*pow(c, 2.0));
    printf("TRAPEZIO: %.3lf\n", ((a+b)*c)/2.0);
    printf("QUADRADO: %.3lf\n", pow(b, 2.0));
    printf("RETANGULO: %.3lf\n", a*b);
    
    return 0;
}
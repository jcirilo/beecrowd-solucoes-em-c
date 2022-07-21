// https://www.beecrowd.com.br/judge/pt/problems/view/1011

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    
    double raio = 0.0;
    double volume = 0.0;
    
    scanf("%lf", &raio);
    
    volume = (4.0/3.0) * PI * (pow(raio, 3));
    
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}
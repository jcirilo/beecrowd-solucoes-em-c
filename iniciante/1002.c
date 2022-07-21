// https://www.beecrowd.com.br/judge/pt/problems/view/1002

#include <stdio.h>
#include <math.h>

int main() {
    
    double n = 3.14159;
    double area = 0.0;
    double raio = 0.0;
    
    scanf("%lf", &raio);
    
    area = n*(pow(raio, 2));
    
    printf("A=%.4lf\n", area);
    
    return 0;
}
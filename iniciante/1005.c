// https://www.beecrowd.com.br/judge/pt/problems/view/1005

#include <stdio.h>
 
#define pesoa 3.5
#define pesob 7.5

int main() {
    
    double a = 0.0;
    double b = 0.0;
    double media = 0.0;

    scanf("%lf %lf", &a, &b);
    
    media = ((a*pesoa)+(b*pesob))/11.0;
    
    printf("MEDIA = %.5lf\n", media);

    return 0;
}
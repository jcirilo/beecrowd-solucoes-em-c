// https://www.beecrowd.com.br/judge/pt/problems/view/1014

#include <stdio.h>
 
int main() {
 
    int x;
    float y;
    
    scanf("%d %f", &x, &y);
    
    printf("%.3f km/l\n", (float) x/y);
 
    return 0;
}
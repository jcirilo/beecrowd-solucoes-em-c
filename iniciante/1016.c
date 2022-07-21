// https://www.beecrowd.com.br/judge/pt/problems/view/1016

#include <stdio.h>
 
int main() {
 
    int km = 0;
    int distancia = 0;
    int tempo = 0;
    
    scanf("%d", &km);
    
    while(distancia != km)
    {
        distancia += 1;
        tempo += 2;
    }
    
    printf("%d minutos\n", tempo);
 
    return 0;
}
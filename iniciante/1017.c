// https://www.beecrowd.com.br/judge/pt/problems/view/1017

#include <stdio.h>

int main() {
 
    int tempo_viagem;
    int vm; // velocidade media (km/h)
    float litros;
    
    scanf("%d %d", &tempo_viagem, &vm);
    
    litros = ((float) vm * (float) tempo_viagem)/12;
 
    printf("%.3f\n", litros);
 
    return 0;
}
// https://www.beecrowd.com.br/judge/pt/problems/view/1020

#include <stdio.h>
#include <math.h>

int main() {
 
    int entrada = 0;
    int ano = 0;
    int mes = 0;
    int dias = 0;

    scanf("%d", &entrada);

    ano = floor(entrada/365);
    mes = floor((entrada%365)/30);
    dias = entrada - (ano*365) - (mes*30);
 
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);

    return 0;
}
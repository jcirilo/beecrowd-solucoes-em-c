// https://www.beecrowd.com.br/judge/pt/problems/view/1000

#include <stdio.h>
#include <string.h>

int main() {
 
    double resultado = 0.0;
    
    struct dados_vendedor{
        char nome[100];
        double salario;
        double vendas;
    };
    struct dados_vendedor vendedor;
    
    gets(vendedor.nome);
    scanf("%lf %lf", &vendedor.salario, &vendedor.vendas);
    
    resultado = vendedor.salario+((vendedor.vendas*15)/100);
    
    printf("TOTAL = R$ %.2lf\n", resultado);    

    return 0;
}
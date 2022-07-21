// https://www.beecrowd.com.br/judge/pt/problems/view/1008

#include <stdio.h>

int main() {

    struct dados_funcionario {
        int codigo_produto;
        int horas_trabalhadas; // horas trabalhadas
        double valor_por_hora; // valor por hora
        double salario;
    };
    struct dados_funcionario funcionario;
    
    scanf("%d", &funcionario.codigo_produto);
    scanf("%d", &funcionario.horas_trabalhadas);
    scanf("%lf", &funcionario.valor_por_hora);
    
    funcionario.salario = (double)(funcionario.horas_trabalhadas)*(funcionario.valor_por_hora);
    
    printf("NUMBER = %d\n", funcionario.codigo_produto);
    printf("SALARY = U$ %.2lf\n", funcionario.salario);
    
    return 0;
}
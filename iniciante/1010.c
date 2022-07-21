// https://www.beecrowd.com.br/judge/pt/problems/view/1010

#include <stdio.h>

struct produto {
    int codigo_produto;
    int quantidade;
    float valor_unitario;
};

int main() {
    
    float valor_total;
    struct produto peca[2];

    scanf("%d %d %f", &peca[0].codigo_produto, &peca[0].quantidade, &peca[0].valor_unitario);
    scanf("%d %d %f", &peca[1].codigo_produto, &peca[1].quantidade, &peca[1].valor_unitario);

    valor_total = ((float)(peca[0].quantidade)*(peca[0].valor_unitario)) + ((float)(peca[1].quantidade)*(peca[1].valor_unitario));
    
    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);

    return 0;
}
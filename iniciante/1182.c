// https://www.beecrowd.com.br/judge/pt/problems/view/1182

#include <stdio.h>
#define TAMARR 12

float somarColuna(float m[TAMARR][TAMARR], int *col)
{
    float soma = 0;
    for(int i = 0; i < TAMARR; i++)
    {
        soma += m[i][(*col)];
    }

    return soma;
}
float mediaColuna(float m[TAMARR][TAMARR], int *col)
{
    float result = 0;
    for(int i = 0; i < TAMARR; i++)
    {
        result += m[i][(*col)];
    }
    result = result/((float)(TAMARR));

    return result;
}

int main()
{
    float m[TAMARR][TAMARR];
    int i, j;
    int col;
    char escolha;

    scanf("%d ", &col);
    scanf("%c", &escolha);
    for(i = 0; i < TAMARR; i++)
    {
        for(j = 0; j < TAMARR; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }

    if(escolha == 'S')
    {
        printf("%.1f\n", (somarColuna(m, &col)));
    } else if (escolha == 'M')
    {
        printf("%.1f\n", (mediaColuna(m, &col)));
    }
    
    return 0;
}
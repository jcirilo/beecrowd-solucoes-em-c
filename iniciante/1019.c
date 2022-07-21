// https://www.beecrowd.com.br/judge/pt/problems/view/1019

#include <stdio.h>

int main()
{

    int n = 0;
    int segundos = 0;
    int minutos = 0;
    int horas = 0;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        segundos++;

        if (segundos == 60)
        {
            minutos++;
            segundos = 0;
            if (minutos == 60)
            {
                horas++;
                minutos = 0;
            }
        }
    }

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
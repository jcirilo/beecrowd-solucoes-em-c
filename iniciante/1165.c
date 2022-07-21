// https://www.beecrowd.com.br/judge/pt/problems/view/1165

#include <stdio.h>

int main()
{
    int x[100];
    int i, n, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 2; j <= x[i]; j++)
        {
            if(x[i] == j)
            {
                printf("%d eh primo\n", x[i]);
                break;
            }
            else if(x[i]%j == 0){
                printf("%d nao eh primo\n", x[i]);
                break;           
            }
        }
    }

    return 0;
}
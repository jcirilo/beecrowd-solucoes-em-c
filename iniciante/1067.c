// https://www.beecrowd.com.br/judge/pt/problems/view/1067

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int x = 0;

    scanf("%d", &x);

    if (x <= 0 || x > 1000)
    {
        exit(0);
    }
    else
    {
        for (i = 1; i <= x; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
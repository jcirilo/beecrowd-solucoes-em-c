// https://www.beecrowd.com.br/judge/pt/problems/view/1177

#include <stdio.h>

#define TAM_ARRAY 1000

int main() {
    int t = 0;
    int i = 0;
    int j = 0;
    int n[TAM_ARRAY];
    
    scanf("%d", &t);
    
    for(int i = 0; i < TAM_ARRAY; i++)
    {
        if(j < t)
        {
            n[i] = j;
        }
        else
        {
            if(j == t)
            {
                j = 0;
                n[i] = j;
            }
        }
        printf("N[%d] = %d\n", i, n[i]);
        j++;
    }
    
    return 0;
}
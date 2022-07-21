// https://www.beecrowd.com.br/judge/pt/problems/view/1013

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, c;
    int maior = 0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    maior = ((a+b+abs(a-b))/2);

    if(c > maior) {
        maior = c;    
    }
    
    printf("%d eh o maior\n", maior);
    
    return 0;
}
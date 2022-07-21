// https://www.beecrowd.com.br/judge/pt/problems/view/1035

#include <stdio.h>
 
int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int cd = c+d;
    int ab = a+b;

    if(!(c > -1 && d > -1)) {
        printf("Valores nao aceitos\n");
        return 0;
    }
    if(!(b > c && d > a && cd > ab)) {
        printf("Valores nao aceitos\n");
        return 0;
    }
    (!(a % 2 == 0))? printf("Valores nao aceitos\n"): printf("Valores aceitos\n");
 
    return 0;
}
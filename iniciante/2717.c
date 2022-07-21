// https://www.beecrowd.com.br/judge/pt/problems/view/2717

#include <stdio.h>
 
int main() {

    int n = 0;
    int a = 0;
    int b = 0;

    scanf("%d", &n);
    scanf("%d %d", &a, &b);

    if(a + b > n) {
        printf("Deixa para amanha!\n");
    } else {
        printf("Farei hoje!\n");
    }
    return 0;
}
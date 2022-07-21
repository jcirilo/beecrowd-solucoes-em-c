// https://www.beecrowd.com.br/judge/pt/problems/view/1018

#include <stdio.h>

int main() {
 
    int n = 0;
    int nota[7] = {0, 0, 0, 0, 0, 0, 0};

    scanf("%d", &n);

    printf("%d\n", n);

    while(n != 0) {
        if((n-100) >= 0) {
            n -= 100;
            nota[0] += 1;
        } else {
            if((n-50) >= 0) {
                n -= 50;
                nota[1] += 1;
            } else {
                if((n-20) >= 0) {
                    n -= 20;
                    nota[2] += 1;
                } else {
                    if((n-10) >= 0) {
                        n -= 10;
                        nota[3] += 1;
                    } else {
                        if((n-5) >= 0) {
                            n -= 5;
                            nota[4] += 1;
                        } else{
                            if((n-2) >= 0){
                                n -= 2;
                                nota[5] += 1;
                            } else {
                                if((n-1) >= 0) {
                                    n -= 1;
                                    nota[6] += 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d nota(s) de R$ 100,00\n", nota[0]);
    printf("%d nota(s) de R$ 50,00\n", nota[1]);
    printf("%d nota(s) de R$ 20,00\n", nota[2]);
    printf("%d nota(s) de R$ 10,00\n", nota[3]);
    printf("%d nota(s) de R$ 5,00\n", nota[4]);
    printf("%d nota(s) de R$ 2,00\n", nota[5]);
    printf("%d nota(s) de R$ 1,00\n", nota[6]);

    return 0;
}
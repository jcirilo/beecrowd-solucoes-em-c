// https://www.beecrowd.com.br/judge/pt/problems/view/1021

#include <math.h>

#define MAX_VALUE 1000000
#define MIN_VALUE 0
#define HUNDREDTH 100

int main () {
    double value = 0.0;
    int qnt[] = {0, 0, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0};

    scanf("%lf", &value);
    if (value < MIN_VALUE || value > MAX_VALUE) {
        return -1;
    } else {
        value *= HUNDREDTH;
    }

    while (value > -1.0) {
        if (value - 100.00*HUNDREDTH >= 0.0) {
            value -= 100.00*HUNDREDTH;
            qnt[0]++;
        } 
        else {
            if (value - 50.00*HUNDREDTH >= 0.0) {
                value -= 50.00*HUNDREDTH;
                qnt[1]++;
            } else {
                if (value - 20.00 * HUNDREDTH >= 0.0) {
                    value -= 20.00 * HUNDREDTH;
                    qnt[2]++;
                } else {
                    if (value - 10.00 * HUNDREDTH >= 0.0) {
                        value -= 10.00 * HUNDREDTH;
                        qnt[3]++;
                    } else {
                        if (value - 5.00 * HUNDREDTH >= 0.0) {
                            value -= 5.00 * HUNDREDTH;
                            qnt[4]++;
                        } else {
                            if (value - 2.00 * HUNDREDTH >= 0.0) {
                                value -= 2.00 * HUNDREDTH;
                                qnt[5]++;
                            } else {
                                if (value - 1.00 * HUNDREDTH >= 0.0) {
                                    value -= 1.00 * HUNDREDTH;
                                    qnt[6]++;
                                } else {
                                    if (value - 0.5 * HUNDREDTH >= 0.0) {
                                        value -= .5 * HUNDREDTH;
                                        qnt[7]++;
                                    } else {
                                        if (value - 0.25 * HUNDREDTH >= 0.0) {
                                            value -= 0.25 * HUNDREDTH;
                                            qnt[8]++;
                                        } else {
                                            if (value - 0.1 * HUNDREDTH >= 0.0) {
                                                value -= 0.1 * HUNDREDTH;
                                                qnt[9]++;
                                            } else {
                                                if (value - 0.05 * HUNDREDTH >= 0.0) {
                                                    value -= 0.05 * HUNDREDTH;
                                                    qnt[10]++;
                                                } else {
                                                    if (value - 0.01 * HUNDREDTH >= 0.0) {
                                                        value -= 0.01 * HUNDREDTH;
                                                        qnt[11]++;
                                                    } else {
                                                        value = -1.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }   
                    }
                }
            }
        }
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", qnt[0]);
    printf("%d nota(s) de R$ 50.00\n", qnt[1]);
    printf("%d nota(s) de R$ 20.00\n", qnt[2]);
    printf("%d nota(s) de R$ 10.00\n", qnt[3]);
    printf("%d nota(s) de R$ 5.00\n", qnt[4]);
    printf("%d nota(s) de R$ 2.00\n", qnt[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", qnt[6]);
    printf("%d moeda(s) de R$ 0.50\n", qnt[7]);
    printf("%d moeda(s) de R$ 0.25\n", qnt[8]);
    printf("%d moeda(s) de R$ 0.10\n", qnt[9]);
    printf("%d moeda(s) de R$ 0.05\n", qnt[10]);
    printf("%d moeda(s) de R$ 0.01\n", qnt[11]);


    return 0;
}
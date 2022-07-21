// https://www.beecrowd.com.br/judge/pt/problems/view/1048
#include <stdio.h>
#include <stdlib.h>

int main () {
    float salary = 0.0;
    float readjustment_percentage = 0.0;
    float readjustment_value = 0.0;

    scanf("%f", &salary);

    if (salary > 2000) {
        readjustment_percentage = 0.04;
    } else if(salary <= 400) {
        readjustment_percentage = 0.15;
    } else if(salary > 400 && salary <= 800) {
        readjustment_percentage = 0.12;
    } else if (salary > 800 && salary <= 1200) {
        readjustment_percentage = 0.1;
    } else if (salary > 1200 && salary <= 2000 ) {
        readjustment_percentage = 0.07;
    }

    readjustment_value = salary * readjustment_percentage;

    salary += readjustment_value;

    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", readjustment_value);
    printf("Em percentual: %.0f %%\n", readjustment_percentage*100.00);

    return EXIT_SUCCESS;
}
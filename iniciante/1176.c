// https://www.beecrowd.com.br/judge/pt/problems/view/1176

#include <stdio.h>
#include <stdlib.h>

#define TAM_ARRY 100

void preencherComFibonacci(long long int *array)
{
   int i;
   for(i = 2; i < TAM_ARRY; i+=1)
   {
      *(array+i) = ((*(array+(i-2)))+(*(array+(i-1))));
   }
}

int main()
{
   unsigned long long int array[TAM_ARRY];
   int *n, t, i;

   array[0] = 0;
   array[1] = 1;

   preencherComFibonacci(array);

   scanf("%d", &t);
   n = (int *) malloc( t*sizeof(int));

   for(i = 0; i < t; i++)
   {
      scanf("%d", (n+i));
   }
    
   for(i = 0; i < t; i++)
   {
      printf("Fib(%d) = %llu\n", *(n+i), array[(*(n+i))]);
   }

   return 0;
}
// https://www.beecrowd.com.br/judge/pt/problems/view/1131

#include <stdio.h>

typedef struct
{
    int gols;
    int vitorias;
    int empates;

}Equipe;

void grenal(Equipe *i, Equipe *g)
{
    int ig;
    int gg;

    scanf("%d %d", &ig, &gg);

    i->gols += ig;
    g->gols += gg;

    if(ig > gg)
    {
        i->vitorias++;
    }
    else if(gg > ig)
    {
        g->vitorias++;
    }
    else
    {
        i->empates++;
        g->empates++;
    }
}

void mostrarResultado(Equipe *i, Equipe *g, int *grenais)
{
    printf("%d grenais\n", *grenais);
    printf("Inter:%d\n", i->vitorias);
    printf("Gremio:%d\n", g->vitorias);
    printf("Empates:%d\n", i->empates);

    if (i->vitorias > g->vitorias) 
    {
        printf("Inter venceu mais\n");
    }
    else if (g->vitorias > i->vitorias) 
    {
        printf("Gremio venceu mais\n");
    }
    else 
    {
        printf("Nao houve vencedor\n");
    }
}

int main()
{
    int escolha = 2;
    int grenais = 1;
    Equipe i = { 0, 0, 0};
    Equipe g = { 0, 0, 0};

    do
    {
        if(escolha == 1){ grenais++; }
        grenal(&i, &g);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &escolha);
    } while (escolha == 1);

    mostrarResultado(&i, &g, &grenais);

    return 0;
}
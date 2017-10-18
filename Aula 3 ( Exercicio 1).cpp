/* Criar uma função que recebe uma estrutura e retorna uma estrutura*/
#include <stdio.h>
#include <stdlib.h>
struct estrutura {
    int hora;
    int minuto;
    int segundo;
};

typedef struct estrutura minhaEstrutura;

minhaEstrutura horario (minhaEstrutura novoHorario);
int main(void)
{
    minhaEstrutura horarioAtual;
    horarioAtual.hora = 10;
    horarioAtual.minuto = 20;
    horarioAtual.segundo= 30;

    horarioAtual = horario(horarioAtual);

    printf("%d:%d:%d\n", horarioAtual.hora, horarioAtual.minuto, horarioAtual.segundo);

    system("pause");
    return 0;
}

minhaEstrutura horario (minhaEstrutura novoHorario)
{
    novoHorario.hora = novoHorario.hora +1;
    novoHorario.minuto = novoHorario.minuto +1;
    novoHorario.segundo = novoHorario.segundo + 1;

    return novoHorario;
}

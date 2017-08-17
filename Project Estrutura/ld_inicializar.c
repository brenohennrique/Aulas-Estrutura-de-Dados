#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variaveis.h"


void ld_inicializar()
{
    vPessoa = malloc(ld_tamanho * sizeof(struct LD_Pessoa));

    if(!vPessoa)
    {
        printf("Erro de alocacao da LD!");
        exit(-1);
    }
}

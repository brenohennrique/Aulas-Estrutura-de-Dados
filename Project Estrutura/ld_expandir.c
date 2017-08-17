#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include "variaveis.h"

void ld_expandir()
{
    int novoTamanho = ld_tamanho + (ld_tamanho / 2);

    struct LD_Pessoa *ld_p;

    int i;

    ld_p = malloc(novoTamanho * sizeof(struct LD_Pessoa));

    if(!ld_p)
    {
        printf("Erro na alocacao de memoria da LD!");
        exit(-1);
    }

    for(i = 0; i < ld_tamanho; i ++)
    {
        strcpy(ld_p[i].nome, vPessoa[i].nome);
        ld_p[i].cpf = vPessoa[i].cpf;
        ld_p[i].telefone = vPessoa[i].telefone;
    }

    free(vPessoa);
    vPessoa = ld_p;
    ld_tamanho = novoTamanho;

}

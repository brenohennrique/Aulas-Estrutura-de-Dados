#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include "variaveis.h"

void ld_adicionar(char ld_nome[20], int ld_cpf, int ld_telefone)
{

    if(ld_posicao  < ld_tamanho)
    {
        strcpy(vPessoa[ld_posicao].nome, ld_nome);
        vPessoa[ld_posicao].cpf = ld_cpf;
        vPessoa[ld_posicao].telefone = ld_telefone;
        ld_posicao++;
    }else
     {
         ld_expandir();
         ld_adicionar(ld_nome, ld_cpf, ld_telefone);
     }

}

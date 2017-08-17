#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include "variaveis.h"

void ld_excluir(int posicao)
{
    int i = 0;

    i = posicao;

    if(i != -1)
    {
       for(; i < ld_posicao -1; i++)
      {
            strcpy(vPessoa[i].nome, vPessoa[i +1].nome);
            vPessoa[i].cpf = vPessoa[i +1].cpf;
            vPessoa[i].telefone = vPessoa[i +1].telefone;
      }

      ld_posicao--;

        printf("\n\nExcluido da Lista Dinamica!\n");

    }
}

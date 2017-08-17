#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include "variaveis.h"

void ld_listar(/*int posicao*/)
{
    int i;
    for (i = 0; i < ld_posicao; i ++){
        printf("Registro %d\n", i);
        printf("Nome: %s\n", vPessoa[i].nome);
        printf("CPF: %d\n", vPessoa[i].cpf);
        printf("Telefone: %d\n\n", vPessoa[i].telefone);

    }
}

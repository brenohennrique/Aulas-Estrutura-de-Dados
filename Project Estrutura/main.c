#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include "variaveis.h"

void main()
{
    ld_inicializar();

    ld_posicao = 0;
    ld_tamanho = 5;

    ab_ultimo_movimento = ' ';

    opcao = 0;
    opcao_listar = 0;
    certeza_excluir = 0;

    while(opcao != 9)
    {

        menu();

        switch(opcao)
        {

            //Adicionar
            case 1:

            system("CLS");
            fflush(stdin);

            printf("Digite o Nome: ");
            gets(nome);

            //Deixar toda palavra em Maiusculo
            strupr(nome);

            printf("Digite o CPF: ");
            scanf("%d", &cpf);

            printf("Digite o Telefone: ");
            scanf("%d", &telefone);

            ld_adicionar(nome,cpf, telefone);

            break;

            //Localizar
            case 2:

                system("CLS");
                //fflush(stdin);

                printf("Digite o CPF da Pessoa que deseja Localizar: ");
                scanf("%d", &cpf);

                system("Pause");

                break;

            //Excluir
            case 3:

                system("CLS");

                printf("Digite o CPF da Pessoa que deseja Excluir: ");
                scanf("%d", &cpf);

                /*

                ab_aux = ab_localizar(ab_inicio, cpf);

                if(ab_aux == 0)
                {
                    printf("\n\nCPF nao encontrado no registro!\n\n");
                }
                else
                {

                    do
                    {
                        system("CLS");

                        ld_listar(ab_aux->ab_registro);

                        printf("Tem certeza que deseja Excluir\n");
                        printf("1 - Sim\n");
                        printf("2 - Nao\n");
                        printf("Digite sua opcao: ");
                        scanf("%d", &certeza_excluir);

                        switch(certeza_excluir)
                        {
                            case 1:
                                ld_excluir(ab_aux->ab_registro);
                                ldl_excluir_no(ab_aux->ab_registro);
                                ab_excluir(ab_aux->ab_cpf);

                                break;

                            case 2:

                                break;

                            default:
                                printf("Valor Invalido!\n\n");

                        }

                        system("PAUSE");

                    }while((certeza_excluir != 1) && (certeza_excluir != 2));

                }*/

                system("PAUSE");

                break;

            //Listar
            case 4:

                system("CLS");

               /* printf("Digite 1 Para listar em Ordem Crescente\n");
                printf("Digite 2 para listar em Ordem Decrescente\n");
                printf("Digite sua Opcao: ");
                scanf("%d", &opcao_listar);

                switch(opcao_listar){

            case 1:
                    system("CLS");

                    printf("Listando\n\n");

                    ldl_listar();

                    break;

            case 2:
                    system("CLS");

                    printf("Listando Invertido\n\n");

                    ldl_listar_invertido();

                    break;

                default:
                    printf("Opcao Invalida!!!\n\n");

                }

                */
                ld_listar();
                system("Pause");

                break;

            //Sair do Programa
            case 9:

                system("CLS");
                printf("Ate a Proxima!!!\n\n");
                system("PAUSE");

                break;

            default:
                printf("Opcao Invalida!\n\n");
        }

    }

    ld_finalizar();
}

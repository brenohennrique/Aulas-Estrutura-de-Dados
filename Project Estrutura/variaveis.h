#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Variaveis Globais
int opcao;
int opcao_listar;
int certeza_excluir;
char nome[20];
int cpf;
int telefone;

//Metodos Globais
void menu();

//Struct da Lista Dinamica
struct LD_Pessoa
{
  char nome[20];
  int cpf;
  int telefone;

};

struct LD_Pessoa * vPessoa;

//Variaveis da Lista Dinamica
int ld_tamanho;
int ld_posicao;

//Metodo Lista Dinamica
void ld_inicializar();
void ld_expandir();
void ld_adicionar(char ld_nome[20], int ld_cpf, int ld_telefone);
void ld_finalizar();
void ld_listar(/*int posicao*/);
void ld_excluir(int posicao);

//struct da Lista Duplamente Ligada
struct ldl_No
{
    struct ldl_No * ldl_anterior;
    int registro;
    char nome[20];
    struct ldl_No * ldl_proximo;
};

struct ldl_No *ldl_inicio;
struct ldl_No *ldl_novo;
struct ldl_No *ldl_aux;
struct ldl_No *ldl_anterior;

//Metodos da Lista duplamente ligada
void ldl_inicializar();
void ldl_finalizar();
void ldl_finalizar_elemento(struct ldl_No * ldl_elemento);
void ldl_adicionar_no(int ldl_registro, char ldl_nome[20]);
void ldl_adicionar_no_final();
void ldl_adicionar_no_inicio();
void ldl_adicionar_no_meio();
void ldl_excluir_no(int ldl_registro );
void ldl_excluir_no_inicio();
void ldl_excluir_no_final();
void ldl_excluir_no_meio();
void ldl_listar();
void ldl_listar_invertido();

struct ldl_No *ldl_novo_no(int ldl_registro, char ldl_nome[20]);

//Variaveis da Arvore Binaria
struct ab_No
{
    struct ab_No *ab_esquerda;
    int ab_registro;
    int ab_cpf;
    struct ab_No *ab_direita;
};

struct ab_No *ab_inicio;
struct ab_No *ab_anterior;
struct ab_No *ab_aux;

struct ab_No *ab_novo_no(int ab_registro, int ab_cpf);
struct ab_No *ab_localizar(struct ab_No *ab_posicao, int ab_cpf);

char ab_ultimo_movimento;

//Metodos da Arvore Binaria
void ab_adicionar(struct ab_No *ab_posicao, struct ab_No *ab_novo);
void ab_inicializar();
void ab_finalizar(struct ab_No *ab_posicao);
void ab_excluir(int ab_cpf);


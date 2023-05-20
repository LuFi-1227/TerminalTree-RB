/* Aqui você inclui sua biblioteca principal, na qual você define as funções e a
estutura da sua árvore;*/

#include "RBTree.h"
/* As bibliotecas abaixo são essenciais para o funcionamento do código, não mexa
 nelas*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Coloque no lugar de RBtree o nome da struct que você usa como tipo árvore;
#define TREE RBtree

/*Definição das cores no tipo BASH como constantes e seus respectivos nomes,
 * outras cores no comentário final do script*/
#define BLACK "\033[30m"
#define RED "\033[31m"
#define RESET "\x1B[0m"

void ImprimeKey(TREE *x) {
  if (x->color)
    printf(
        RED "%d\n",
        x->key); // Para mexer na cor, você deve alterar a palavra constante
                 // antes das aspas, e dependendo, deve mexer no if também, ese
                 // bloco de código se encontra 2 vezes em terminal, lembre-se,
                 // a cor deve ficar ANTES das aspas, se colocar depois, o
                 // código vai pintar outras impressões, mas não essa.
  else
    printf(BLACK "%d\n", x->key);
}

void Terminal(TREE *x, char *prefixo) {
  if (!x) {
    printf("Impossível imprimir arvore");
    return;
  }
  char *N_prefixo, *ponteiro, *segmento;
  TREE *y;
  if (x->p == NULL) {
    ImprimeKey(x);
  } else {
    if (x->p->r != NULL && x->p->l != NULL && x->p->r != x) {
      ponteiro = "├── ";
      segmento = "│   ";
    } else {
      ponteiro = "└── ";
      segmento = "    ";
    }
    printf(RESET "%s%s", prefixo,
           ponteiro); // Aqui eu uso a cor reset, que é branco, padrão do meu
                      // terminal escuro, caso você seja diferentinho, altere o
                      // BASH da cor por um de sua preferência, deicei uma
                      // tabela no fim do código pra ajudar;
    ImprimeKey(x);
    N_prefixo = malloc(strlen(prefixo) + strlen(segmento) + 2);
    sprintf(N_prefixo, "%s%s", prefixo, segmento);
  }
  if (x->l != NULL) {
    y = x->l;
    Terminal(y, N_prefixo);
  }
  if (x->r != NULL) {
    y = x->r;
    Terminal(y, N_prefixo);
  }
}

/*#define C_GREEN     "\033[32m"
#define C_YELLOW    "\033[33m"
#define C_BLUE      "\033[34m"
#define C_MAGENTA   "\033[35m"
#define C_CYAN      "\033[36m"
#define C_GRAY      "\033[37m"

Cores para quem quiser brincar de pintar o código

by LuFi_1227
On github: https://github.com/LuFi-1227/Repo*/
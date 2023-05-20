# TerminalTree-RB
Aqui você vai encontrar um meio de imprimir uma árvore rubro-negra no seu terminal para facilitar sua vida na hora de aprender a parte prática da matéria

COMO UTILIZAR:

ATENÇÃO:
<p>*| No arquivo MAIN, você vai incluir o ARQUIVO.H da seguinte forma: #include"TerminalTree.h";</p>
<p>*| Feito isso, você vai construir a sua árvore Red-Black;</p>
<p>*| Com a árvore feita, você vai mandar o nó raiz para a função com o prefixo principal, da seguinte forma:</p>

```
      Terminal(T->root, "");
      Onde:
         T->root == Nó raíz da árvore;
         "" == prefixo da impressão;
```

<p>Se o prefixo estiver vazio, como eu coloquei, a árvore será implementada no seguinte modelo:</p>

```
0
└── 1
    └── 2
       └── 3
            └── 4
                └── 5
                    └── 6
                        └── 7
                            └── 8
                                └── 9
```

Mas se tiver algo nele, como:
      Terminal(T->root, " * ");
  Ela vai sair assim:

```
0
*└── 1
*    └── 2
*        └── 3
*            └── 4
*                └── 5
*                    └── 6
*                        └── 7
*                            └── 8
*                                └── 9
```

<p>Então, muito cuidado com o prefixo da função, pois ele demarca o início de uma linha, a partir da segunda linha.</p>

<p>Mas porque não da primeira?<br>
-Porque a INTENÇÃO do código é ser usado sem prefixo;</p>

<p>Posso colocar o prefixo na primeira?<br>
-Mas é claro...que não! Pode sim, mas eu não podia perder a oportunidade de usar essa frase de efeito, é só pedir pra um printf dentro do
primeiro if fazer isso, assim:</p>

```
if (x->p == NULL) {
    printf("%s", prefixo);
    ImprimeKey(x);
}
```

<p>Isso vai funcionar, confia ¯\_( ͡° ͜ʖ ͡°)_/¯.</p>
 
 <p>É isso que eu queria dizer, se houver qualquer dúvida (ou se quiser pagar um café, ou me chamar pra um enconto), 
 entre em contato comigo:</p>
 
 <p>Email: luizsalvesp@protonmail.com</p>
 
 
Inspirado em:<br>
*[Unix Tree](https://github.com/kddnewton/tree)

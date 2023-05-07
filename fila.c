#include <stdio.h>
/*estou fazendo esse repositorio com intuito 
de estudar, portanto, havera apenas codigos 
sem exercicios*/
/* github: KayFerraz
email: kayannesouza14@gmail.com
FCT UNESP- CIÊNCIA DA COMPUTAÇÃO*/


/*INICIALIZANDO*/
int inicializar (Fila *Fila);
{Fila->inicio=0;
Fila->fim=0;
}

/*LISTA ESTÁTICA-VERIFICAR FILA*/
 bool vazia (Fila *Fila);
 { if(Fila->inicio==Fila->fim);
        return true;
    else return false;
 }
/*OU*/
bool cheia (Fila *Fila);
 { if(Fila->fim==max);
        return true;
    else return false;
 }

 /*INSERÇÃO DE ELEMENTO*/
void inserir(Fila *Fila, tipoelem *elemento);
{   if(cheia(Fila)){
printf("Fila esta cheia")} else {
      Fila->vFila[Fila->fim]=elemento;
        Fila->fim++;}
}


/*REMOÇÃO DE ELEMENTO*/
void remover(Fila *Fila, tipoelem *elemento);
{   if(vazia(Fila)){
printf("Fila esta vazia");
} else {
      Fila->vFila[Fila->inicio]=elemento;
        Fila->inicio++;}
}

/*OBTER INICIO DA FILA*/
void buscaInicio (Fila *Fila, tipoelem *elemento);
{ if (vazia(Fila)); {
    printf ("nao ha elementos para mostrar");
} else {
  (*elemento=Fila->vazia[Fila->inicio];
}} 




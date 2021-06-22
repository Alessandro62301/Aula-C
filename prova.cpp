
/*Implemente um procedimento que receba três filas, f_res, f1 e f2, e transfira alternadamente os elementos de f1 e f2 para f_res. Ao final 
desse procedimento as filas f1 e f2 vão estar vazias, e a fila f_res vai conter todos os valores originalmente em f1 e f2 (inicialmente f_res pode ou não estar vazia).

Implemente um programa que utilize a função.

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct lista{	
		int valor;
        int id;
        int hora;
        int prioridade;
        int tamanho;
		struct lista *proximo;
	};

void imprimirPilha(lista *l){

  while(l != NULL){
         printf("valor : %d  id : %d  hora : %d  prioridade : %d  tamanho : %d \n",l->valor,l->id,l->hora,l->prioridade,l->tamanho);
          l = l->proximo;
     }
}

int tamanhoLista(lista *l){
int cont = 0;
  if(l->valor == 0 && l->proximo == NULL){
    return 0;
  }
  else{
    while (l->proximo != NULL)
    {
    l = l->proximo;
    cont++;
    }
  return cont + 1;
}

}

lista *inserir(lista**l,int valor,int id,int hora,int prioridade,int tamanho){
      int pos = tamanhoLista(*l);
      int i = 0;
      lista *aux = (lista*)malloc(sizeof(lista*));
      aux->valor = valor;
      aux->id  = id;
      aux->hora = hora;
      aux->prioridade = prioridade;
      aux->tamanho = tamanho;

      if(pos == 0){
        aux->proximo = *l;
        *l = aux;
      }

      lista *cont = *l;
      while (cont->proximo!= NULL &&  i != pos - 1)
      {
        cont = cont->proximo;
        i++;
      }
      aux->proximo = cont->proximo;
      cont->proximo = aux;
      return aux;
 
}

int retira(lista **l){

      lista *aux3 = *l;
        int maior = aux3->prioridade;
        while(aux3 != NULL)
        {
            if(aux3->prioridade > maior)
                maior = aux3->prioridade;
            aux3= aux3->proximo;
        }

  int cont = 0;
  lista * apaga;    
  if ((*l)->prioridade == maior)
  {
    apaga = *l;
    *l = (*l)->proximo;
    free(apaga);
    cont++;
  }
  else
  {
    lista * aux = *l;
    lista * ant = *l;
    while (aux != NULL)
    {
      if ((aux)->prioridade == maior)
      {
        apaga = aux;
        ant->proximo = aux->proximo;
        free(apaga);
        cont++;
      }
      ant = aux;
      aux = aux->proximo;
    }
  }
  return cont;
}      



int main(){
	lista * ini_lista;
	lista * proximo_lista;
    lista *res;
	
	ini_lista = (lista*)malloc(sizeof(lista*));
    ini_lista->valor = NULL;
	proximo_lista = ini_lista;


	proximo_lista->proximo = NULL;
	proximo_lista = ini_lista;

    inserir(&ini_lista,100,0,12,5,100);
    inserir(&ini_lista,200,1,12,1,100);
    inserir(&ini_lista,300,2,12,2,100);
    inserir(&ini_lista,400,3,12,10,100);
    inserir(&ini_lista,200,1,12,1,100);
    inserir(&ini_lista,300,2,12,2,100);
    inserir(&ini_lista,400,3,12,10,100);
    inserir(&ini_lista,200,1,12,1,100);
    inserir(&ini_lista,370,2,12,20,100);
    inserir(&ini_lista,10000,3,12,1,100);
    
    retira(&ini_lista);
  
  
    imprimirPilha(ini_lista);
}
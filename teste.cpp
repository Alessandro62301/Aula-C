
/*Um Sistema Operacional de computador mantém em memória uma lista de processos que devem acessar a CPU em um determinado momento.
 Para isso, a lista usa a política FIFO para inserção nesta lista. Porém uma alteração foi feita para considerar um sistema com prioridades.
  Desta forma, os processos com maior prioridade deverão passar à frente. Além disso, as informações que são armazenadas sobre os processos 
  são: id, hora de início, tamanho e prioridade. Implemente uma função de inserção e remoção que siga a especificação acima.
*/

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
		struct lista *proximo;
	};

int tamanho(lista *l){
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




    lista *inserir(lista**l,int valor){
      int pos = tamanho(*l);
      int i = 0;
      lista *aux = (lista*)malloc(sizeof(lista*));
      aux->valor = valor;

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



int main(){
	lista * ini_lista;
	lista * proximo_lista;
	
	ini_lista = (lista*)malloc(sizeof(lista*));
    ini_lista->valor = NULL;
	proximo_lista = ini_lista;


	proximo_lista->proximo = NULL;
	proximo_lista = ini_lista;

}
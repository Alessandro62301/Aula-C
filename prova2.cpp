#include<stdio.h>
#include<stdlib.h>
/*Implemente um procedimento que receba três filas, f_res, f1 e f2, e transfira alternadamente os elementos de f1 e f2 para f_res. Ao final 
desse procedimento as filas f1 e f2 vão estar vazias, e a fila f_res vai conter todos os valores originalmente em f1 e f2 (inicialmente f_res pode ou não estar vazia).

Implemente um programa que utilize a função.

*/

typedef struct lista{	
		int valor;
		struct lista *proximo;
	};
void retira( lista **l) {
  lista *aux = *l;            
   if (aux == NULL) 
   return;   

   *l = aux->proximo;                 
   free (aux);                          
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

lista *inserirFila(lista**l,int valor){
      int pos = tamanhoLista(*l);
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

void unirFila(lista *res,lista *l1,lista *l2){


    while (l1 != NULL && l2 != NULL)
    {
        inserirFila(&res,l1->valor);
        inserirFila(&res,l2->valor);

        l1 = l1->proximo;
        l2 = l2->proximo;
    }
    free(l1);
    free(l2);

}


int main(){

    lista * ini_lista1;
	lista * proximo_lista1;
    lista * ini_lista2;
	lista * proximo_lista2;
    lista *resultante;
    lista *proximo_resultante;
	
    resultante = (lista*)malloc(sizeof(lista*));
    resultante->valor = NULL;
	proximo_resultante = resultante;
	proximo_resultante->proximo = NULL;
	proximo_resultante = resultante;

	ini_lista1 = (lista*)malloc(sizeof(lista*));
    ini_lista1->valor = NULL;
	proximo_lista1 = ini_lista1;
	proximo_lista1->proximo = NULL;
	proximo_lista1 = ini_lista1;


	ini_lista2 = (lista*)malloc(sizeof(lista*));
    ini_lista2->valor = NULL;
	proximo_lista2 = ini_lista2;
	proximo_lista2->proximo = NULL;
	proximo_lista2 = ini_lista2;


    inserirFila(&ini_lista1,10);
    inserirFila(&ini_lista1,20);
    inserirFila(&ini_lista1,30);
    inserirFila(&ini_lista1,40);

    inserirFila(&ini_lista2,100);
    inserirFila(&ini_lista2,200);
    inserirFila(&ini_lista2,300);
    inserirFila(&ini_lista2,400);

    unirFila(resultante,ini_lista1,ini_lista2);

    
    imprimirPilha(resultante);







    return 0;
}
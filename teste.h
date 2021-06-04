
#include<stdio.h>
#include<stdlib.h>
struct lista{	
		int valor;
		struct lista *proximo;
	};

typedef struct lista * ptrNo;

lista* ini_lista;
int tam;

void remover(int pos){

  if(pos>=0 && pos <=tam){
  
      if(pos == 0){//inicio
        lista* rev = ini_lista;
        ini_lista = ini_lista->proximo;
        free(rev);
        tam--;
      }
      else if(pos == tam-1){//fim
        lista*aux = ini_lista;

        for(int i = 0 ; i < tam -1 ; i++){
            aux = aux->proximo;
        }
          lista* rev = aux->proximo;
          aux->proximo = NULL;
          free(rev);
          tam--;
        }
    
      else{
        lista*aux = ini_lista;

        for(int i = 0 ; i < pos -1 ; i++){
            aux = aux->proximo;
        }
          lista* rev = aux->proximo;
          aux->proximo = NULL;
          free(rev);
          tam--;
        }
       
      }
    
 
  else
    printf("posicao invalida");
}

void add(int valor,int pos){


  if(pos>=0 && pos <=tam){
    lista *l = (lista*)malloc(sizeof(ptrNo));
    l->valor = valor;
    l->proximo = NULL;

      if(pos == 0){//inicio
        if(ini_lista == NULL){
          l->proximo = ini_lista;
          ini_lista = l;
          tam++;
        }
      }
      else if(pos == tam){//fim
        lista *aux = ini_lista;
        for(int i =0 ; i < tam -1 ; i++){
          aux = aux->proximo;
        }
      aux->proximo = l;
      tam++;
      }
      else{
          lista *aux = ini_lista;
          for(int i =0 ; i < pos -1 ; i++){
          aux = aux->proximo;
        }
        l->proximo = aux->proximo;
        aux->proximo = l;
        tam++;
      }
    }
 
  else
    printf("posicao invalida");

}


int escreverArquivo(){

  
  FILE* arquivo = fopen("lista.txt", "w");
    if(arquivo == NULL) {
        printf("Erro ao abrir o lista.txt.\n");
        return 1;
    }
  else{
    lista *aux = ini_lista;
  for(int i = 0 ; i < tam ; i++){
    fprintf(arquivo,"Posicao : %d , valor :%d \n",i,aux->valor);
    aux = aux->proximo;
    }
  }

  
    
    fclose(arquivo);
    return 0;
}


void desempilha(lista **l){


  int cont = tamanho(*l);
  int pos = 0;
  lista * apaga = *l;

    lista * aux = *l;
    lista * ant = *l;
    while (aux != NULL)
    {
      if (pos == cont -1)
      {
        ant->proximo = aux->proximo;
        free(apaga);
        cont++;
      }
      ant = aux;
      aux = aux->proximo;
      pos = pos+1;
    }
  }
      

void addlista(lista *l ,int valor,int pos){
lista *ini_lista = l;
int cont = tamanho(l);

  if(pos>=0 && pos <=cont){
    lista *l = (lista*)malloc(sizeof(lista*));
    l->valor = valor;
    l->proximo = NULL;

      if(pos == 0){
            lista *aux = (lista*)malloc(sizeof(lista*));
            aux->valor = valor;
            aux->proximo = l;

            l = aux;
        }
                 
      else if(pos == cont){//fim
        lista *aux = ini_lista;
        for(int i =0 ; i < tam -1 ; i++){
          aux = aux->proximo;
        }
      aux->proximo = l;
      }
      else{
          lista *aux = ini_lista;
          for(int i =0 ; i < pos -1 ; i++){
          aux = aux->proximo;
        }
        l->proximo = aux->proximo;
        aux->proximo = l;
      }
    }
 
  else
    printf("posicao invalida");

}
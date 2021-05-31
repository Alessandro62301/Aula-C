/*Lista.h

Insere     ✅        com posição
Remove          ✅um elemento
Tamanho   ✅
Busca elemento ✅
Get(lista, i) ✅
Cheia
Ordena
Imprime ✅
Escreve em arquivo ✅


Pilha

Empilha
Desempilha
Mostra elemento do topo
Tamanho 
Imprime

Fila

Enfileirar
Desenfileirar
Mostra elemento inicio
Tamanho
Imprime
*/
struct lista{	
		int valor;
		struct lista *proximo;
	};

typedef struct lista * ptrNo;

lista* ini_lista;
int tam;
int tamanho(ptrNo l){
    int cont = 0;
    while (l->proximo != NULL)
    {
    l = l->proximo;
    cont++;
    }
return cont + 1;
}

//RECEBE A POSICAO E RETORNA O VALOR
int buscar(int elem){
      lista *l = ini_lista;
    int cont = 0;
    while (l != NULL)
    {
        if(l->valor == elem){
            return cont;
            }
        l = l->proximo;
        cont++;
    }
return -1;
}
//RECEBER O VALOR DO ELEMENTO NA POSICAO ESCOLHIDA
int get(int pos){
    lista *l = ini_lista;

  int cont =0;
  while(l!=NULL && cont < pos)
  {
    l= l->proximo;
    cont++;
  }
  return l->valor;
}

//INICIAR OU ADICIONAR ELEMENTO EM UMA LISTA
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
//IMPRIME A LISTA
void imprimir(){
  lista *aux = ini_lista;
  for(int i = 0 ; i < tam ; i++){
    printf("%d \n",aux->valor);
    aux = aux->proximo;
    }
}
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
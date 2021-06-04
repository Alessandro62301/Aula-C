#include<stdio.h>
#include<stdlib.h>
#include"lista.h"



int main(){
	int resp;
	lista * ini_lista;
	lista * proximo_lista;
	
	ini_lista = (lista*)malloc(sizeof(lista*));
	proximo_lista = ini_lista;

	// if(ini_lista == NULL)
	// 	exit(1);
	
	printf("Deseja continuar 1<sim> 2<nao>.");
	scanf("%d",&resp);
	if(resp == 1){
		
	while(1){
		resp =0;
		printf("Insira um valor:");
		scanf("%d",&proximo_lista->valor);
		printf("Deseja continuar 1<sim> 2<nao>.");
		scanf("%d",&resp);
		if(resp == 1){
			proximo_lista->proximo = (lista * )malloc(sizeof(lista *));
			proximo_lista = proximo_lista->proximo;
		}else
			break;
	}
	proximo_lista->proximo = NULL;
	proximo_lista = ini_lista;
	}
	else{
	}
	

   
	
	


	//int buc = buscar(ini_lista,1);
	//printf("POSICAO == %D \n",buc);

	//	int cont = retira(&ini_lista,4);
	//	printf("o  valor retirado foi %d \n",cont);

	//addlista(ini_lista,50,0);2
	//ordenar(ini_lista);
	//empilha(ini_lista,150);
	//desempilha(&ini_lista);
	//imprimir(ini_lista);
	//escreverArquivo(ini_lista);
	//topo(ini_lista);
	//lerArquivo(ini_lista);
	//desempilha(&ini_lista);
	// enfileirar(ini_lista,10);
	// enfileirar(ini_lista,20);
	// enfileirar(ini_lista,30);
	// enfileirar(ini_lista,40);
	// enfileirar(ini_lista,50);
	//desenfileira(&ini_lista);
	lerArquivoFila(ini_lista);
	imprimir(ini_lista);
	//int tam = tamanho(ini_lista);
	//printf("tamanho = %d \n",tam);


 
	return 0;
}

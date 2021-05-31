#include<stdio.h>
#include<stdlib.h>
#include"lista.h"



int main(){
	
	/*lista * ini_lista;
	lista * proximo_lista;
	
	ini_lista = (lista*)malloc(sizeof(lista*));
	if(ini_lista == NULL)
		exit(1);

	
	proximo_lista = ini_lista;
	
	while(1){
		
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

	*/
    //  while(proximo_lista != NULL){
    //      printf("valor : %d \n",proximo_lista->valor);
    //      proximo_lista = proximo_lista->proximo;
    // }

    //remove();
    // cont =  tamanho(ini_lista);
    // printf("TAMANHO == %d\n",cont);
    // imprime(ini_lista);
    // int pos = buscar(ini_lista,1);
    // printf("POSICAO == %D \n",pos);
    // int pegarGet = get(ini_lista,3);
    // printf("GET == %d \n",pegarGet);
	add(10,0);
	add(20,1);
	add(30,2);
	add(50,3);
	remover(0);
	imprimir();
	int getElem = get(0);
	printf("GET == %d \n",getElem);
	int buc = buscar(50);
	printf("POSICAO == %D \n",buc);
	escreverArquivo();


	
 
	return 0;
	
}

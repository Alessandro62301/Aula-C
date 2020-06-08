#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
	
/*	
//  char palavra[] = {"caderno"};
//	char palavra[] = "caderno";
	char palavra[8] = "caderno";
	
	printf("%s\n",palavra);
	
	char nome_cliente[7] = "Fulano";
	
	printf("Nome do cliente: %s\n",nome_cliente);
	
	
	
// percorrer cada posicaco do vetor

int i;
	
	for(i = 0 ; i < 6 ; i++){
		printf("O valor do elemento %d da string = %c \n",i,nome_cliente[i]);
	}
*/	



// \0 para fechar o looping


/*
	int i;
	char nome_cliente[3] = '\0';
	
	for(i = ; nome_cliente[i] != '\0' ; i++){
		printf("O valor da posicao %d da string =%c \n",i,nome_cliente[i]);
	}*/
	
	/*
	int i;
	char nome_cliente[50] = "Fulano de tal";
	
	for(i = 0 ; nome_cliente[i] !='\0' ; i++){
		printf("O valor do elemento %d da string = %c \n",i,nome_cliente[i]);
	
	}*/
	
	//para contar os caracteeres uteis
/*	
	int i,cont=0;
	char nome_cliente[50] = "Fulano*de*tal";
	
	
	for(i = 0 ; nome_cliente[i] != '\0' ; i++){
		printf("O valor do elemento %d da string = %c \n",i,nome_cliente[i]);
		cont++;
	}
	printf("Quantidade de caracteres: %d \n",cont);
	*/
	
	
	
	// biblioteca string.h
/*	
	char nome_cliente[50] = "Fulano*de*tal";
	
	// strlen para contar os caracteres uteis
	
	printf("\nQuantidade de caracteres usando o strlen : %d \n",strlen(nome_cliente));
	
	//para fazeer copia de strings - strcpy
	
	char nome[15];
	
	strcpy(nome,"budega");
	printf("Nome = %s \n",nome);
	
	// podemos copiar variaveis
	
	char nome1[] = "lucas";
	char nome2[] = "joao";
	
	strcpy(nome1,nome2);
	printf("Nome = %s \n",nome1);
	
	// digitar um nome
*/	
	
	
	/*char nome1[15];
	char nome2[15];
	
	printf("digite seu nome:");
	scanf("%s",&nome1);
	
	printf("digite seu nome:");
	scanf("%s",&nome2);
	
	
	printf("Seu nome e %s\n",nome1);
	printf("Seu nome e %s",nome2);*/
	
	// copiar parte da string strncpy
	
	
/*		
	char nome1[15];
	char nome2[15];
	
	printf("digite seu nome:");
	scanf("%s",&nome1);
	
	printf("digite seu nome:");
	scanf("%s",&nome2);
	
	
	strncpy(nome1,nome2,3);
	printf("a mistura e %s\n",nome1);
		 

	// Para comparar strings - strcmp
	
	char str1[4] = "abc";
	char str2[4] = "abd";
	int resp;
	
	resp = strcmp(str1,str2);
	
	printf("\n retorno =%d \n",resp);
	
	// outror exmplo
	char str3[4] = "abd";
	char str4[4] = "abc";
	int resp2;
	
	resp = strcmp(str3,str4);
	
	printf("\n retorno =%d \n",resp2);
	
	// outror exmplo
	char str5[4] = "abc";
	char str6[4] = "abc";
	int resp3;
	
	resp = strcmp(str5,str6);
	
	printf("\n retorno =%d \n",resp3);
*/	
	
	
	
	//para comparar n caracteres - stncmp
	
	char str1[] ="curso de python";
	char str2[] = "curso de c ";
	
	int retorno;
	
	retorno=strncmp(str1,str2,10);
	printf(" retorno = %d",retorno);
	
	
	
	
	
	
	
	
	return 0;
}

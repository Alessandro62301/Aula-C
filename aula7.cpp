
Aula 7
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>/*con(console) io(entrada/saida), nessa biblioteca temos a funçãopara entrada
e saida de programas que usam console(DOS), getche,background....*/

//Estrutura de Repetição for - para

//Imprimir na tela os numeros de 1 a 10, usando a estrutura de repetição for

	int main(){
	int num;
	int cont;
	for(cont=1; cont<=10; cont++){
		printf("%i \n",cont);
	}
	
//Crie um programa que peça ao usuario para entrar com 4 notas e calcule a media, usando o for

	int i;
	float nota,media,valor;
	valor=0;
	for(i=1; i<=4; i++){
		printf("Digite a nota:");
		scanf("%f",&nota);
		valor=valor + nota;
	}	
	media=valor/4;
	printf("Media: %.1f \n",media);
	
//For encadeado
	int contador;
	char cod;//declarei uma variavel caractere para poder parar o codigo
	valor=0;
	cod='C';
	while(cod!='F'){
		for(contador=1; contador<=4; contador++){
			printf("Digite a nota:");
			scanf("%f",&nota);
			valor=valor + nota;
		}
		media=valor/4;
		printf("Media: %.1f \n",media);
		valor=0;//temos que zerar o totla, senão ele pega a nota do aluno anterior
		nota=0;
		printf("Deseja calcula a media de mais um aluno?Pressione qualquer tecla para prosseguir, ou a tecla 'F' para finalizar \n");
		cod=getche();/*função que trabalha com caractere, vai capturar o que foi digitado na
		variavel cod e depois vai ser testado novamente pelo while, até quando F for digitado
		para finalizar o programa */
	}
	
	
	
	
	return 0;
}
aula7.cpp
Exibindo aula7.cpp.

Programa de Computadores I
SINF01MBG4A
Aula 6

Thereza Prado Gondim
17 de abr.

aula6.cpp
C++

aula6.exe
Arquivo desconhecido
Coment�rios da turma

Aula 6
#include<stdio.h>
#include<stdlib.h>

//La�o de repeti��o while - enquanto

int main(){
	int contador=1; //n�o precisar ser contador o nome , pode ser qq coisa, tipo i
	
	while(contador <=10){ //enquanto o numero estiver entre 1 e 10 ser� executado o la�o de repeti��o
		printf("%i \n", contador);
		contador++;//instru��o de incremento, vai ser incrementado de 1 em 1 at� chegar a condi��o estabelecida
	}

//Crie um programa que receba 4 notas e calcule a m�dia

	int cont;
	float nota,media,total;
	total=0;
	cont=1;
	while(cont<=4){
		printf("Digite as notas");
		scanf("%f",&nota);
		total=total + nota;
		cont++;
	}
	media=total/4;
	printf("Media: %.1f \n", media);
	
//Escreva um programa que pe�a ao usuario para entrar com um numero e retorne a media

	int i=0;
	float valor1,media1,total1;
	total=0;
//O -1 � a minha flag o valor definido para a sa�da
	printf("Digite um valor(-1 para encerrar): ");
	scanf("%f",&valor1);
	while(valor1 != -1){ //!= significa diferente
		total1=total1 + valor1;
		i++;
		printf("Digite um valor(-1 para encerrar): ");
		scanf("%f",&valor1);
	}
	media1=total1/i;
	printf("Media: %.1f \n",media1);
	
	
	return 0;
}
aula6.cpp
Exibindo aula6.cpp.

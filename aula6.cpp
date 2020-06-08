Programa de Computadores I
SINF01MBG4A
Aula 6

Thereza Prado Gondim
17 de abr.

aula6.cpp
C++

aula6.exe
Arquivo desconhecido
Comentários da turma

Aula 6
#include<stdio.h>
#include<stdlib.h>

//Laço de repetição while - enquanto

int main(){
	int contador=1; //não precisar ser contador o nome , pode ser qq coisa, tipo i
	
	while(contador <=10){ //enquanto o numero estiver entre 1 e 10 será executado o laço de repetição
		printf("%i \n", contador);
		contador++;//instrução de incremento, vai ser incrementado de 1 em 1 até chegar a condição estabelecida
	}

//Crie um programa que receba 4 notas e calcule a média

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
	
//Escreva um programa que peça ao usuario para entrar com um numero e retorne a media

	int i=0;
	float valor1,media1,total1;
	total=0;
//O -1 é a minha flag o valor definido para a saída
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

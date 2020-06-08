#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

// funcoes escopo das variaveis
// o escopo da variavel determina como a variavel vai ser utilizada dentro do programa.
// 2 tipos de escopo-- local dentro de uma funcao e global e delcarada fora de qualquer funcao.
// expemplo de variavel global - a variavel global e declarada fora do main().
void escreva();
void teste();
void prova();
int main(){
    setlocale(LC_ALL,"");//unicode setar localizacao brasil
prova();



	
	
	return 0;
}

                                            // void executa mas nao retorna
                                            // nao deve criar uma funcvao dentro da outra somente chamar ela
void teste(){                               // define a funcao 
	
	printf("Amanha Chovera.\n");
}
void prova(){
	printf("Amanha Tem Prova.\n");
}

void escreva(){
	int num = 100; // exemplo de variavel local declarada dentro da funcao
	int dobro = num*2;
	printf("O numero e %i\n",num);
	printf("O dobro e %i\n",dobro);
}

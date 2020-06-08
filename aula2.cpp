#include<stdio.h> 
#include<math.h>                                                                    //comando para chamar a biblioteca
int main(){                                                                           //int= inteiro main= principal
printf("bom dia\n");                                                                  //printf imprimir na tela
printf("");                                                                           //comentario de 1 linha	
	                                                                                   /*varias linhas*/
int x; 	x=7*2;                                                                         //criar variavel	// = para atribuir valor

printf("O valor da variavel e igual a %i \n",x);	                                  //%i para chamar uma variavel 
	
int y=5;

printf("o valor da variavel e igual a %i \n",y);	
                                                                                 //operadores aritimeticos some(+),sub(-),mult(*),div(/),resto da divisao(%)
	
	int num1=25;
	int num2=10;
	int num3=5;
	
	int soma=num1+num2+num3;
	
	printf("a soma e %i \n",soma);
	
	int sub=num1-num3;
	
	printf("o valor da subtracao e %i \n",sub);
	
	int mult=num2*num1+num3;
	
	printf("o valor da multiplicacao e %i \n",mult);
	
	int resto=num1%num2;
	
	printf("o resto da subtracao e %i \n",resto);
	
	int pot=pow(resto,num3);
	
	printf("o valor da potencia e %i\n",pot);
	
	int div=num1/num3;
	
	printf("o valor da div e %i",div);
	
	printf("Digite a av1:");                                                  // scanf busca um valor externo
	scanf("%i",&av1);                                                        // & buscar variavel
	                                                                         
	
	printf("Digite a av2:");
	scanf("%1",&av2);
	
	
	                                                                        // int %i (inteiro) float %f (flutuante) char %c (caracter)
	
	
	int inteiro=20;
	float flutuante=5.9;
	char caractere='texto';
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;

}

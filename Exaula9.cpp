#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

float num1,num2;
void soma();
void sub();
void mult();
void div();



int main(){
	
	printf("Digite um numero:\n");
	scanf("%f",&num1);
	printf("Digite um numero:\n");
	scanf("%f",&num2);
	
	soma();
	sub();
	div();
	mult();
	
	return 0;
}

void soma(){
	
float soma = num1+num2;	
printf("A soma e Igual a:%.2f\n",soma);	
}
void sub(){
float sub = num1-num2;
printf("A subtracao e Igual a:%.2f\n",sub);
}
void div(){
float div = num1/num2;	
printf("A divisao e igual a:%.2f\n",div);	
}
void mult(){
float mult = num1*num2;
printf("A multiplicacao e igual a:%.2f\n",mult);
}


























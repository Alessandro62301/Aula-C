#include<stdio.h>
#include<stdlib.h>

//exemplo while(enquanto) veerifica e executa.
int main(){
/*	
int b=2;
while(b!=0) {
	printf("%i",b);
}
*//*
// do while executa e dps verifica.
float nota1,nota2;
int resp;
float media;
do{
	printf("Digite uma nota:");
    scanf("%f",&nota1);
    
    printf("Digite uma nota:");
    scanf("%f",&nota2);
    
    media =(nota1 +nota2)/2;
    printf("A media e %.2f\n",media);
    
    printf("Digite 1 para continuar e 2 para fechar\n");
    scanf("%i",&resp);
}
 while(resp==1);   

	
// switch tem mais de 1 condicao.
/*
int i;
printf("digite um numero de 1 a 5 \n");
scanf("%i",&i);
switch(i){
	case 1:
		printf("primeiro");
		break;
	case 2:
	    printf("segundo");
		break;
	case 3:
	    printf("terceiro");
		break;
	case 4:
	    printf("quarto");
		break;
	case 5:
	     printf("quinto");	
         break;
	default:
	printf("Invalida");	
					
}
// exemplo com caractere.
*/
char Est_Civil;

printf("\n Insira o seu estado civil:");
scanf("%c",&Est_Civil);

switch(Est_Civil){
	
	    case 'c':
		printf("Casado\n");
		break;
      	case 's':
		printf("Solteiro\n");
		break;
    	case 'd':
		printf("Divorciado\n");
		break;
	    case 'v':
		printf("Viuvo\n");
		break;
	    default:
		printf("errrrorrr");
}

/* operador ternario- condicao? verdadeira : falsa (pode subistiuir o fi/else)
	
int num1=10;
int num2=20;
int num3=30;
int resp;


num1 < num2?printf("sim\n")	: printf("nao \n");
	
num1 < num2? resp=10	:  resp=-10;
printf("%i",resp);	
*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

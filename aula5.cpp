#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	
	int num;
	int cont;
	
	for( cont=1 ; cont <=10 ;cont++){
		
		printf("%i\n",cont);
	}	
		
	
	int i;
	float media,valor,nota;
	valor=0;
	
	for( i=1; i<=4; i++ ){
		printf("Digite a Nota:");
		scanf("%f",&nota);
		valor=valor+nota;
		
	}
	
	media=valor/4;
	printf("A media e igual a:%.2f:",media);
	
	
	
	// for encadeiado//
	
	char cod;                   //declarar variavel para parar o codigo
	valor=0;
	cod='c';
	
	while(cod!='f'){
		for(cont=1 ; cont <=4 ; cont++){
			printf("digite a nota:\n");
			scanf("%f",&nota);
			valor=valor +nota;
		}
		media=valor/4;
		printf("media :%.1f\n",media);
		valor=0;
		nota=0;
		printf("Deseja calcular a media de mais um aluno. Press any boton or F TO STOP\n");
		cod=getche(); // funcao q trabal;ha com caracter
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}


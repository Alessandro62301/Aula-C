#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



void ex1();
void ex2();
int main(){
	setlocale(LC_ALL,"");
	
    ex2();
	
	
/*	
    int valor[6];
    int i;
	printf("digite um valor:");
	scanf("%i",&valor[0]);
	printf("\n O valor do vetor e %i \n",valor[0]);
	
	printf("digite um valor:");
	scanf("%i",&valor[1]);
	printf("\n O valor do vetor e %i \n",valor[1]);
	
   
	for(i=0 ; i<6 ; i++){
	printf("digite um valor:");
	scanf("%i",&valor[i]);		
	}
	
	for(i=0 ; i<6 ; i++){
	printf("\n A posicao %i recebe o valor %i",i,valor[i]);
	}
	
	int a=5, c ,vet[a];
	vet[0]=2;
	vet[1]=4;
	vet[2]=a+vet[1];
	
	printf("\n A soma de a + vetor[1] = %i",vet[2]);

	
float notas[4]={7.5,8.0,9.6,10};
int cont;

    for(cont=0 ; cont <4 ; cont++){
    	printf("\nNota %i= %.1f\n",cont,notas[cont]);
	}	
*/	
// ler 10 numeeros e so apresente os pares	

	
	return 0;
}
void ex1(){

 int vetor[10];
 int i;

     for(i=0 ; i<10 ; i++){
     	printf("informe o valor na  posicao %i:",i);
     	scanf("%i",&vetor[i]);     	
}
     for(i=0 ; i<10 ; i+=2){
        printf("\nO valor do vetor na posicao %i =%i\n",i,vetor[i]);
}	
	
}



void ex2(){
	
	int vetor[15];
	int i;
	
	
	for(i=0 ; i<15 ; i++ ){
		vetor[i]=(i+1)*3;
        printf("\nP-%i = %i",i,vetor[i]);
	}
	
	

	
	
	
	
	
	
	
	
}






















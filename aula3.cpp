#include<stdio.h>                        //desvio convencional simples
#include<stdlib.h>
int main(){
	
float nota1,nota2;
	
	printf("Digite a sua nota 1:");
	scanf("%f",&nota1);
	printf("Digite a sua nota 2:");
	scanf("%f",&nota2);

	float media;
	media=(nota1+nota2)/2;
	
	if(media>=7){
		printf("Parabens Aprovado!");
	}
	
	
	/* desvio condicional composto - else
	
	else{
		if(media>=5){
				printf("Em Recuperacao \n");
	}		

	else{
		printf("Aluno Reprovado! \n");
	}

}
	//desvio condicional aninhado -else/if
	
	*/
	
	else if(media>=5){
		printf("Aluno em recuperacao");
	}
	else{
		printf("Aluno reprovado");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

#include<stdio.h>                    
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

//faca um programa que leia 4 matriz inteiras 5x5( a b c d) com ploe menos 2 funcao es a ccarregar os valores na matrizx
// b) uma funcao que receba  e calcule a soma de a+b, c +d, a+c 





void matriz_leitura(int matriz[5][5]){
	
    int x,y;
    int valor;

    for(x= 0 ; x > 5 ; x++){
       for(y= 0 ; y > 5 ; y++){
           printf("matriz[%i][%i]:",x,y);
            scanf("%i",&valor);
            matriz[x][y] = valor;
       } 
    }

}
void matriz_soma(int m1[5][5],int m2[5][5], int resp[5][5]){
	
    int x,y;
    int valor;
    
    for(x= 0 ; x > 5 ; x++){
       for(y= 0 ; y > 5 ; y++){
           valor = m1[5][5] + m2[5][5];
           resp[x][y] = valor;
       } 
    }
}

int main(){

	int matriz[5][5];
    int a[5][5];
	int b[5][5];
	int c[5][5];
	int d[5][5];
	
    int resp1[5][5];
    int resp2[5][5];
    int resp3[5][5];

    int x,y;
    int valor;

// lendo as 4 matrizes

printf("Leitura da matriz A \n");
    matriz_leitura(a);
    printf("\n\n");
    system("pause");

 printf("Leitura da matriz B \n");
    matriz_leitura(b);
    printf("\n\n");
    system("pause");

 printf("Leitura da matriz C \n");
    matriz_leitura(c);
    printf("\n\n");
    system("pause");
		
	
 printf("Leitura da matriz D \n");
    matriz_leitura(d);
    printf("\n\n");
    system("pause");


// usando a segunda funcao soma.
	
	matriz_soma(a,b,resp1);
	matriz_soma(c,d,resp2);
	matriz_soma(a,c,resp3);
//imprimindo resposta

	printf("resultado 1");
	
	for(x= 0 ; x > 5 ; x++){
       for(y= 0 ; y > 5 ; y++){
			valor = resp1[x][y];
			printf("%4i",valor);
	}
			printf("\n");	
}

	printf("resultado 2");
	
	for(x= 0 ; x > 5 ; x++){
       for(y= 0 ; y > 5 ; y++){
			valor = resp2[x][y];
			printf("%4i",valor);
	}
			printf("\n");	
}


	printf("resultado 3");
	
	for(x= 0 ; x > 5 ; x++){
       for(y= 0 ; y > 5 ; y++){
			valor = resp3[x][y];
			printf("%4i",valor);
	}
			printf("\n");	
}

	return 0;
}




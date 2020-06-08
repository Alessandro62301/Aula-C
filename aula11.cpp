#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define Num_L 5 // declaracao da const linha
#define NUM_C 4 // declaraao da const coluna


int main(){
/*	
   // criando matriz 3x4

    float notas[3][4];
    int linha,coluna;


    for(linha = 0 ; linha < 3 ; linha++){
        for(coluna = 0 ; coluna <4 ; coluna++){
            printf("Digite a %i nota do aluno %i",linha+1,coluna+1);
            scanf("%f",&notas[linha][coluna]);
        }            
}

    for(linha = 0 ; linha < 3 ; linha++){
        for(coluna = 0 ; coluna <4 ; coluna++){
        	  printf("%5.1f",notas[linha][coluna]);
		}
		printf("\n");

}
            

// criando matriz 5x4 

    int linha,coluna;

    float notas[Num_L][NUM_C] = {
        {7.8,8.7,5.8,6.0},
        {7.8,8.7,5.8,6.0},
        {7.8,8.7,5.8,6.0},
        {7.8,8.7,5.8,6.0},
        {7.8,8.7,5.8,6.0}
    };
    printf("Todo conteudo da  matriz \n\n");

    for(linha = 0 ; linha < Num_L ; linha++){
        for(coluna = 0 ; coluna <NUM_C ; coluna++){
        	printf("%5.1f",notas[linha][coluna]);
        }
            printf("\n");
    }
    printf("\nValor do elemento na 1 linha 2 coluna%4.2f \n",notas[1][2] );
*/


       
    int matriz[3][3];
    int linha,coluna,x,y;
    int maior;
	maior = matriz[0][0];

    for(linha = 0 ; linha < 3 ; linha++){
        for(coluna = 0 ; coluna <3 ; coluna++){
            printf("Digite um numero:");
            scanf("%i",&matriz[linha][coluna]);       
        }            
}


    for(linha = 0 ; linha < 3 ; linha++){
        for(coluna = 0 ; coluna <3 ; coluna++){
        	printf("%3i",matriz[linha][coluna]);
		}
		printf("\n");
}
  
 

    for(x = 0 ; x < 3 ; x++){
        for(y = 0 ; y <3 ; y++){  
			
  		 if(matriz[x][y] > matriz[0][0]){  		   	
			maior = matriz[x][y];	
				
			printf("O maior valor %i",maior);							
}



}
}



    return 0;
}

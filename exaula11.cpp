#include<stdio.h>                      
#include<stdlib.h>


int main(){
	
	   
    int matriz[3][3];
    int linha,coluna,x,y,indlinha,indcoluna;
    int maior;
	

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
  
 
    maior = matriz[0][0];

    for(x = 0 ; x < 3 ; x++){
        for(y = 0 ; y <3 ; y++){  
			
  		 if(matriz[x][y] > maior){  		   	
			maior = matriz[x][y];	
			indlinha = x;
			indcoluna = y;	
										
        }
    }
}
	printf("O maior valor %i esta na l[%i] e C[%i].",maior,indlinha,indcoluna);	
	
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>


//concatenar == juntar
void concatenarstrings(char string1[],int t1,
						char string2[], int t2,
						char string3[]){
						
	int i, j;
	for(i = 0 ; i < 7 ; i++){ //primeira palavra
		string3[i] = string1[i];
	}						
	for(j = 0 ; j < 5 ; j++){
		string3[t1 + j ] = string2[j];//segunda palavra
	}
						}							


int main(){
	
	int i;
/*	char aula[]={'s','t','r','i','n','g'};
	
	for(i = 0 ; i < 6 ; i++){
		printf("%c",aula[i]);
	}
	printf("\n");
	system("pause");*/
	
	
	char palavra1[] = {"budega"};
	char palavra2[] = {'v','i','n','h','o'};
	char nova[12];
	
	concatenarstrings(palavra1,7,palavra2,5,nova);
	
	for(i = 0 ; i < 12 ; i++){
		printf("%c",nova[i]);
		
}
	
	
	
	
	
	
	return 0;
}

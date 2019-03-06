#include <stdio.h>
#include <stdlib.h>



char *strcpy(char* palavra,char *palavra2){
	int i;
	for(i=0;i < sizeof(palavra);i++){
		palavra2[i] = palavra[i];	
	}
	return palavra2;
	
}




int main() {
	
	char palavra[40];
	char palavra2[40];
	printf("\nDigite a primeira string:");
	gets(palavra);
	printf("\nDigite a segunda string: ");
	gets(palavra2);
	printf("\nSegunda string: %s",palavra2);
	printf("\nUsando a funcao: %s",strcpy(palavra,palavra2));
	
	
	
	
	
		
			

}








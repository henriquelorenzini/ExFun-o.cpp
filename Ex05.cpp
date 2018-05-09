// Deixa os caracteres em maiusculo

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int fras(char frase[256]){
	printf("\nFrase em maiúsculo: %s", strupr(frase));
	printf("\nFrase em minúsculo: %s", strlwr(frase));
}
int main(){
	setlocale(LC_ALL, "Portuguese");

	char frase[256];

	printf("Escreva uma frase: ");
	gets(frase);
	
	fras(frase);
	
	return(0);
}

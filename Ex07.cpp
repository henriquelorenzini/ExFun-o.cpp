*/ o programa pede dois numeros e soma todos os números entre eles

#include <stdio.h>
#include <stdlib.h>

int var(int soma){
	printf("\nO resultado da soma eh : %d",soma);
	printf("\n");
}
int main(void){
	int numero, soma = 0;
	int num1, num2;
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&num1);
	printf("Informe o segundo numero: ");
	scanf("%d",&num2);
	
	for (numero = num1; numero <= num2; numero++){
		soma = numero + soma;
	}
	
		var(soma);
		return(0);

}

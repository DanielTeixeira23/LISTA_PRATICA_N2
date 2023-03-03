#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int valor[5]; 
	int *pont;
	
	pont = valor;

	for(int i=0; i<5; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &valor[i]);
	}
	
	for(int j=0; j<5; j++){
		printf("\nValor: %d\n", *(pont+j));
		printf("Endereço de memória: %p\n\n", pont+j);
	}
	
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n;
	int *pont;
	
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &n);
	
	int vetor[n];

	printf("Digite os valores do vetor:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
	
	pont = vetor;
	
	for(int j=n-1; j>=0; j--){
		printf("\nValor Inverso: %d\n", *(pont + j));
	}
	
	return 0;
}

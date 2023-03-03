#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float x, d;
	float *pont;
	
	printf("Digite um número: ");
	scanf("%f", &x);
	
	pont = &x;
	d = *pont * 2;

	printf("Valor original: %.2f\n", *pont);
	printf("Dobro do valor original: %.2f", d);
	
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int x, y;
	int *p1, *p2;
	
	printf("Digite dois números inteiros:\n");
	scanf("%d %d", &x, &y);
	
	p1 = &x;
	p2 = &y;
	
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	
	printf("\nValores atualizados são: %d e %d", x, y);
		
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
		
	char frase[50];
	char copia[50];
	char *pont_frase = frase;
	char *pont_copia = copia;
	
	printf("Digite uma string: ");
	gets(frase);
		
	for(int i=0; i<50; i++){
		if(
			*pont_frase == 'a' || *pont_frase == 'e' || *pont_frase == 'i' || *pont_frase == 'o' || *pont_frase == 'u' ||
			*pont_frase == 'A' || *pont_frase == 'E' || *pont_frase == 'I' || *pont_frase == 'O' || *pont_frase == 'U'){ 
			 pont_frase++;
			 continue;
		}
		*pont_copia = *pont_frase;
		pont_frase++;
		pont_copia++;
	}
	
	printf("String sem as vogais: %s\n", copia);

	return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    // Declara��o de vari�veis
    int N1,N2,result;
    char op;
    
    //Entrada de dados
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a opera��o desejada:");
	scanf("%s",&op);
	
	printf("Digite o primeiro numero:\n");
	scanf("%i",&N1);
	
	printf("Digite o segundo numero:\n");
	scanf("%i",&N2);
	
	
	//processamento
	switch(op){
	
	case '+':
		result=N1+N2;
		printf("%i + %i= %i",N1,N2,result);
		break;
	case '-':
		result=N1-N2;
		printf("%i - %i= %i",N1,N2,result);
		break;
	case '*':
		result=N1*N2;
		printf("%i x %i= %i",N1,N2,result);
		break;
			
	case '/':
		result=N1/N2;
		printf(" %i / %i= %i",N1,N2,result);
		break;
		
		default:
		printf("Formato da opera��o est� invalido. \n");	
	
	
	
	}
	
	}

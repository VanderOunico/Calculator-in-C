#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(){

//Vari�veis
float kg;
float m;
float R;

setlocale(LC_ALL,"Portuguese");
// Entrada de Dados

printf("Digite a seu peso em kg:");
scanf("%f",&kg);

printf("Digite sua altura em Metros: ");
scanf("%f",&m);

//Processamento e Sa�da 
R=kg/(m*m);

if (R<=18.5){
	printf("Voc� est� abaixo do peso normal!");}

else if (R<=25){
	printf("Voc� est� no peso normal.");}

else if (R<30.1 ){
	printf("Voc� est� acima do peso normal.");}

else {
	printf("Obesidade!");}
}

#include <stdio.h>

int main() {
	float peso, altura, imc;
	
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	printf("Ingrese la altura en metros: ");
	scanf("%f", &altura);
	
	
	imc = peso / (altura * altura);
	
	
	printf("\nSu indice de masa corporal es: %.2f\n", imc);
	printf("\n indice | Condicion\n");
	printf("----------------------------\n");
	
	if (imc < 18.5) {
		printf("<18.5 | Bajo peso\n");
	} else if (imc >= 18.5 && imc <= 24.9) {
		printf("18.5 a 24.9 | Normal\n");
	} else if (imc >= 25.0 && imc <= 29.9) {
		printf("25.0 a 29.9 | Sobrepeso\n");
	} else {
		printf(">=30 | Obesidad\n");
	}
	
	return 0;
}

#include <stdio.h>// Repositorio: https://github.com/Fede969/IMC_Calculadora

int main() {
	float peso, altura, imc;
	
	
	do {
		printf("Ingrese el peso en kg: ");
		scanf("%f", &peso);
		if (peso <= 0) {
		printf("Error: el peso debe ser un valor positivo.\n");
		}
	} while (peso <= 0);
	
	do {
		printf("Ingrese la altura en metros: ");
		scanf("%f", &altura);
		if (altura <= 0) {
			printf("Error: la altura debe ser un valor positivo.\n");
		}
	} while (altura <= 0);
	
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

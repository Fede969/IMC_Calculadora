#include <stdio.h>

int main() {
	float peso, altura, imc;
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	printf("Ingrese la altura en metros: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\nSu indice de masa corporal es: %.2f\n", imc);
	
	// Mostrar tabla fija
	printf("\n indice | Condicion\n");
	printf("----------------------------\n");
	printf("<18.5   | Bajo peso\n");
	printf("18.5-24.9 | Normal\n");
	printf("25.0-29.9 | Sobrepeso\n");
	printf(">=30    | Obesidad\n");
	
	// Mostrar condición del usuario
	if (imc < 18.5) {
		printf("\nEl usuario se encuentra en la condición: Bajo peso\n");
	} else if (imc <= 24.9) {
		printf("\nEl usuario se encuentra en la condición: Normal\n");
	} else if (imc <= 29.9) {
		printf("\nEl usuario se encuentra en la condición: Sobrepeso\n");
	} else {
		printf("\nEl usuario se encuentra en la condición: Obesidad\n");
	}
	
	return 0;
}

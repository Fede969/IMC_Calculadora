
//https://github.com/Fede969/IMC_Calculadora/tree/TP7

#include <stdio.h>
#define TAM 5

int main(int argc, char *argv[]) {

	unsigned long int  codigos[TAM] ;
	float precios[TAM] ;
	int i ;
	int mayor=0 ;
	int menor=0 ;
	
	printf("ingrese 5 productos:\n");
	
	for(i = 0; i < TAM;i++){
		
	do{
		printf("ingrese el codigo:\n");	
		scanf("%lu",&codigos[i]);
		if(codigos[i] < 1 || codigos[i] > 999999999){
		printf("error ingrese devuelta el codigo\n");
		}
	}while(codigos[i] < 1 ||codigos[i] > 999999999);
	
	do{	
	
		printf("ingrese el precio:\n");	
		scanf("%f",&precios[i]);
		if(precios[i] < 0){
		printf("error ingrese devuelta el precio\n");
		}
	}while(precios[i] < 0);
}
		
	printf("\nCodigo\t\tPrecio\n");	
	for(i=0; i < TAM; i++) {
		printf("%lu\t\t%.2f\n",codigos[i],precios[i]);
	}	
	for(i=0;i<TAM;i++){	
       if(precios[i] > precios[mayor]){	
	      mayor = i;
	}
       if (precios[i] < precios[menor]){
	       menor = i;
	}
}   printf("\nMas caro:[%lu] %.2f\n",codigos[mayor],precios[mayor]);
	printf("\nMas barato:[%lu] %.2f\n",codigos[menor],precios[menor]);
	
	return 0;
	}
	




/*Autor: Ricardo Jafet Granados Chable, Realizado: 23/02/2022
    programa numero 24 en C: Area de un circulo.
	*/
	
#include<stdio.h>
#include<math.h>

int main(){ 
	float r, a;
	printf("Introduce el radio del circulo: ");
	scanf("%f",&r);
	a =M_PI*pow(r,2);
	if(r<=0){
		printf("\nPorfavor introduce un numero positivo");
	}else{
		printf("El area del circulo es: %f", a);
	}
	return 0;
}

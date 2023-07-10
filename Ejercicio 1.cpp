#include <stdio.h>
#include <math.h>
/*Realizar un programa en C, donde se pida el ingreso del radio y luego se presente
un menú de 3 opciones de cálculo: (a)-Cálculo de la longitud de la circunferencia,
(b)-Cálculo del área del círculo y (c)-Cálculo del volumen de la esfera, se pida el
ingreso de la opción elegida, se realice el cálculo correspondiente y se muestre
el resultado. Utilizar la if-else-if.*/
int main(void) {
	float r;
	float circ;
	float area;
	float vol;
	float PI=3.14159;
	char op;
	
	printf("Elija una opcion:\n");
	printf("a)Calculo de circunferencia\n");
	printf("b)Calculo del area\n");
	printf("c)Calculo del volumen\n");
	scanf("%c",&op);
	printf("Ingrese el radio:\n");
	scanf("%f",&r);
 	
	if ((op=='a')||(op=='A')){
		circ=PI*2*r;
		printf("La circunferencia es:%f\n", circ);
	}	
	else if ((op=='b')||(op=='B')){
		area=PI*r*r;
		printf("El area es:%f\n", area);
	}
	else if ((op=='c')||(op=='C')){
		vol=4.0/3.0*PI*pow(r,3);
		printf("El volumen es:%f\n", vol);
	}
	else 
		printf("Opcion no valida\n");
	return 0;
}

#include <stdio.h>
#include <math.h>

int main(void) {
	char op;
	float radio;
	float circunsferencia, area, volumen;
	float PI=3.14159;
	
	printf ("a)-Cálculo de la longitud de la circunferencia\n");
	printf ("b)-Cálculo del área del círculo\n");
	printf ("c)-Cálculo del volumen de la esfera\n\n");
	printf ("Elija una opción: ");
	scanf("%c", &op);
	
	printf ("Ingrese el radio: ");
	scanf ("%f", &radio);
	
	switch (op){
	case 'a':{
	case 'A':
		circunsferencia= PI*2*radio;
		printf ("Circunsferencia= %f\n", circunsferencia);
		break;
	}
	case 'b':{
	case 'B':
		area=PI*radio*radio;
		printf ("Area= %f\n", area);
		break;
	}
	case 'c':{
	case 'C':
		volumen=4.0/3.0 * PI * pow(radio, 3);
		printf ("Volumen= %f\n", volumen);
		break;
	}
	default: 
			printf ("Opción no válida");
			
	}
	
	return 0;
}



#include <stdio.h> 
//Se incluye la libreria stdio.h
//Se inicia el algoritmo
//Se declara la variable x para el valor de x a ser calculado en la ecuacion x³+2x²+3x+5 de tipo float, ya que puede adoptar valores decimales
//Se declara la variable eq para la ecuacion x³+2x²+3x+5 de tipo float, ya que puede adoptar valores decimales
//Se imprime el titulo del ejercicio
//Se ingresa el valor de x a ser calculado 
//Se imprime el resultado de la evaluacion para x
//Fin del algoritmo
int main()
{
	float x, eq;

	printf("\n  PROGRAMA EJERCICIO 8 \n");
    printf("\n  Evaluadora de x para p(x) = x³+2x²+3x+5  \n");
	printf("\n  Ingrese el un valor para x: ");
	scanf("%f", &x);

	eq = ((x * x * x) + (2 * x * x) + (3 * x) + 5);

	printf("\n  El resultado de la evuluacion es: %.2f \n", eq);
		return 0;
}

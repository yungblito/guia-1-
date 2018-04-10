#include <stdio.h> 
//Se incluye la libreria stdio.h
//Se inicia el algoritmo
//Se declara la variable precio para el precio por km a ser calculado de tipo int, ya que el dinero que manejan las personas solo puede adoptar valores enteros
//Se declara la variable total para el calculo del precio final del viajede tipo int, ya que el dinero que manejan las personas solo puede adoptar valores enteros
//Se declara la variable kms para la distancia en kilometros del viaje de tipo float, ya que puede adoptar valores decimales
//Se imprime el titulo del ejercicio
//Se ingresa la distancia del viaje en kilometros
//Se ingresa el precio por kilometros del viaje a ser considerado
//Se calcula el costo total del viaje multiplicando el precio por la cantidad de kilometros
//Se imprime el costo total del viaje 
//Fin del algoritmo
int main()
{
	int precio;
	int total;
	float kms;

	printf("\n  PROGRAMA EJERCICIO 10 \n");
    printf("\n  Calculadora Precio del Viaje   \n");
	printf("\n  Ingrese la distancia del viaje en kilometros: ");
	scanf("%f", &kms);
	printf("\n  Ingrese el costo por kilometros: ");
	scanf("%d", &precio);

	total = kms * precio;

	printf("\n  El precio final del viaje es: %d pesos\n", total);
		return 0;
}









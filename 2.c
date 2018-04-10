#include <stdio.h> 
//Se incluye la libreria stdio.h
//Se inicia el algoritmo
//Se imprime el titulo del ejercicio
//Se declara la variable numero para el numero a realizarse el calculo del cuadrado y cubo de tipo int, ya que es un numero entero
//Se declara la variable numcuadrado para el cuadrado del numero de tipo int, ya que es un numero entero
//Se declara la variable numcubo para el cubo del numero de tipo int, ya que es un numero entero
//Se introduce el numero entero positivo a ser calculado
//Se calcula el cuadrado del numero
//Se calcula el cubo del numero
//Se imprime el cuadrado del numero
//Se imprime el cubo del numero
//Fin del algoritmo

int main()
{
	int numero, numcuadrado, numcubo;

	printf("\n  PROGRAMA EJERCICIO 2 \n");
	printf("\n  Ingrese un numero entero positivo: ");
	scanf("%u", &numero);
	
    numcuadrado = numero * numero;
    numcubo = numero * numero * numero;

    printf("\n  El cuadrado del numero es: %u \n", numcuadrado);
    printf("\n  El cubo del numero es: %u \n", numcubo);


	

		return 0;
}

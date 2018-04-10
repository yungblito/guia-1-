#include <stdio.h> 
//Se incluye la libreria stdio.h
//Se inicia el algoritmo
//Se declara la variable sueldobase para el sueldo base a ser ingresado de tipo int, ya que el dinero que manejan las personas solo puede adoptar valores enteros
//Se declara la variable extra para el sueldo extra a ser calculado de tipo int, ya que el dinero que manejan las personas solo puede adoptar valores enteros
//Se declara la variable total para el sueldo total a ser calculado de tipo int, ya que el dinero que manejan las personas solo puede adoptar valores enteros
//Se imprime el titulo del ejercicio
//Se ingresa el sueldo base
//Se calcula el sueldo extra considerando una comision del 28 por ciento
//Se imprime el total del mes 
//Se imprime la cantidad correspondiente al sueldo extra
//Fin del algoritmo

int main()
{
	int sueldobase, extra, total;

	printf("\n  PROGRAMA EJERCICIO 9 \n");
    printf("\n  Calculadora Sueldo   \n");
	printf("\n  Ingrese el sueldo base: ");
	scanf("%d", &sueldobase);

	extra = (sueldobase * 0.28);
	total = extra + sueldobase;

	printf("\n  El total de este mes corresponde a : %d pesos \n", total);
	printf("  con %d pesos extra correspondientes a una comision \n  del 28 por ciento del sueldo base.\n", extra);
		return 0;
}

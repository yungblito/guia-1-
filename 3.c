#include <stdio.h> 
#include <math.h>
//Se incluye la libreria stdio.h
//Se incluye la libreria math.h para el calculo de la raiz
//Se inicia el algoritmo
//Se imprime el titulo del ejercicio
//Se declara la variable h de tipo float para la hipotenusa, ya que puede adoptar valores no enteros
//Se declara la variable c1 de tipo float para el cateto 1, ya que puede adoptar valores no enteros
//Se declara la variable c2 de tipo float para el cateto 2, ya que puede adoptar valores no enteros
//Se ingresa el cateto 1
//Se ingresa el cateto 2 
//Se calcula la hipotenusa mediante el uso del teorema de pitagoras
//Se imprime la hipotenusa con dos cifras decimales
//Fin del algoritmo
int main()
{
	float h, c1, c2;
	float hipotenusa, cateto1, cateto2;

	printf("\n  PROGRAMA EJERCICIO 3 \n");
	printf("\n  Ingrese el 1er cateto: ");
	scanf("%f", &c1);
	printf("\n  Ingrese el 2do cateto: ");
	scanf("%f", &c2);

	cateto1 = c1 * c1;
	cateto2 = c2 * c2;
	h= cateto1 + cateto2;
	hipotenusa = sqrt(h);

	 printf("\n  La hipotenusa es: %.2f \n", hipotenusa);

		return 0;
}
 




	



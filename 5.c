#include <stdio.h> 
//Se incluye la libreria stdio.h
//Se inicia el algoritmo
//Se declara la variable nomdino de tipo char para el nombre del dinosaurio, ya que es una cadena de caracteres
//Se declaran las variables peso y longitud del tipo float, ya que son numeros con cifras decimales
//Se imprime el titulo del ejercicio
//Se ingresa el nombre del dinosaurio
//Se ingresa el peso en libras
//Se ingresa la longitud en pies
//Se transforma de libras a kilos multiplicando el valor ingresado por 0.45
//Se transforma de pies a metros multiplicando el valor ingresado por 0.3048
//Se imprime el nombre del dinosaurio
//Se imprime el peso en kilos con dos cifras decimales
//Se imprime la longitud en metros con dos cifras decimales
//Fin del algoritmo

int main()
{
	char  nomdino[30]; 
	float peso, longitud;
	float pesok, longitudk;

	printf("\n  PROGRAMA EJERCICIO 5 \n");
    printf("\n  Calculadora peso y longitud de un dinosaurio\n");
	printf("\n  Ingrese el nombre del dinosaurio: ");
	fgets(nomdino, 30, stdin);
	printf("\n  Ingrese el peso en libras: ");
	scanf("%f", &peso);
	printf("\n  Ingrese el la longitud en pies: ");
	scanf("%f", &longitud);

	pesok = peso * 0.45;
	longitudk = longitud * 0.3048;

    printf("\n  El nombre del dinosaurio es: %s", nomdino);
    printf("\n  El peso es: %.2f kilos\n", pesok);
    printf("\n  La longitud es: %.2f metros\n", longitudk);

    	return 0;
}



#include <stdio.h> 
//Se incluye la libreria stdio.h
//Se inicia el algoritmo
//Se declara la variable precio para el total a pagar de tipo int, ya que el dinero que manejan los usuarios solo adopta valores entero
//Se declara la variable galon para la cantidad de gasolina en galones de tipo float, ya que puede adoptar valores decimales
//Se declara la variable litros para la cantidad de gasolina en litros de tipo float, ya que puede adoptar valores decimales
//Se imprime el titulo del ejercicio
//Se ingresa la carga de combustible en galones
//Se calcula la cantidad en litros multiplicando los galones por 3.785
//Se calcula el precio total a pagar multiplicando los litros por 820 
//Se imprime la carga en litros con dos cifras decimales
//Se imprime el total a cancelar en pesos
//Fin del algoritmo

int main()
{
	int precio;
	float galon, litros;

	printf("\n  PROGRAMA EJERCICIO 6 \n");
    printf("\n  Maquina Registradora Gasolinera \n");
	printf("\n  Ingrese la carga en galones: ");
	scanf("%f", &galon);

	litros = galon * 3.785;
	precio = 820 * litros;

    printf("\n  La carga es: %.2f litros\n", litros);
    printf("\n  El total a pagar es: %d pesos\n", precio);

   		return 0;
}
  

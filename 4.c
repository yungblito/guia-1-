#include <stdio.h> 
//Se incluye la libreria stdio.h
//Se inicia el algoritmo
//Se declara la variable base para la base del rectangulo a ser calculado de tipo float, ya que puede adoptar valores no enteros
//Se declara la variable altura para la altura del rectangulo a ser calculado de tipo float, ya que puede adoptar valores no enteros
//Se declara la variable area para el area del rectangulo a ser calculada de tipo float, ya que puede adoptar valores no enteros
//Se declara la variable perimetro para el perimetro del rectangulo a ser calculado de tipo float, ya que puede adoptar valores no enteros
//Se imprime el titulo del ejercicio
//Se ingresa la base en en centimetros
//Se ingresa la altura en centimetros
//Se calcula el area del rectangulo
//Se calcula el perimetro del rectangulo
//Se imprime el area del rectangulo con dos cifras decimales
//Se imprime el perimetro del rectangulo con dos cifras decimales
//Fin del algoritmo
int main()
{
	float base, altura, area, perimetro;
    
    printf("\n  PROGRAMA EJERCICIO 4 \n");
    printf("\n  Calculadora area y perimetro del rectangulo \n");
	printf("\n  Ingrese la base en centimetros: ");
	scanf("%f", &base);
	printf("\n  Ingrese la altura en centimetros: ");
	scanf("%f", &altura);

	area = base * altura;
	perimetro = 2 * (base + altura);

    printf("\n  El area del rectangulo es: %.2f centimetros cuadrados\n", area);
    printf("\n  El perimetro del rectangulo es: %.2f centimetros\n", perimetro);

    	return 0;
}
